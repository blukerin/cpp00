#include "../includes/Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
  this->_accountIndex = this->_nbAccounts;
  this->_amount = initial_deposit;
  this->_nbDeposits = 0;
  this->_nbWithdrawals = 0;

  _nbAccounts++;
  _totalAmount += initial_deposit;
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

Account::~Account(void) {
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void Account::_displayTimestamp(void) {
  time_t      now = time(NULL);
  struct tm   *t = localtime(&now);
  char        buffer[20];

  strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", t);
  std::cout << buffer << " ";
}

int Account::getNbAccounts(void) {  
  return (_nbAccounts);
}

int Account::getTotalAmount(void) {
  return (_totalAmount);
}

int Account::getNbDeposits(void) {
  return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
  return (_totalNbWithdrawals);
}

void  Account::displayAccountsInfos(void) {
  _displayTimestamp();
  std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}


void  Account::makeDeposit(int deposit) {
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:";
  this->_amount += deposit;
  this->_nbDeposits++;
  _totalAmount += deposit;
  _totalNbDeposits++;
  std::cout << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
  _displayTimestamp();
  if (checkAmount() < withdrawal)
  {
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
    return (false);
  }
  std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal;
  this->_amount -= withdrawal;
  this->_nbWithdrawals++;
  _totalAmount -= withdrawal;
  _totalNbWithdrawals++;
  std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
  return (true);
}

int Account::checkAmount(void) const {
  return (this->_amount);
}

void  Account::displayStatus(void) const {
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}