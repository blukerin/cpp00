#include "../includes/PhoneBook.hpp"

static std::string  displayString(std::string str) {
  if (str.length() > 10)
    return (str.substr(0, 9) + ".");
  return (str);
}

PhoneBook::PhoneBook() {
  this->_index = 0; 
  std::cout << "Welcome to Crappy! Your own phonebook for up to 8 contacts" << std::endl;
}

PhoneBook::~PhoneBook() {
  std::cout << "End of Crappy, see you soon!" << std::endl;
}

void PhoneBook::addContact(void) {
  std::string input;

  input = "";
  while (!std::cin.eof() && input == "")
  {
    std::cout << "Enter the new contact first name > ";
    if (std::getline(std::cin, input) && input != "")
      this->_contacts[this->_index].setFirstName(input);
  }
  input = "";
  while (!std::cin.eof() && input == "")
  {
    std::cout << "Enter the new contact last name > ";
    if (std::getline(std::cin, input) && input != "")
      this->_contacts[this->_index].setLastName(input);
  }
  input = "";
  while (!std::cin.eof() && input == "")
  {
    std::cout << "Enter the new contact nickname > ";
    if (std::getline(std::cin, input) && input != "")
      this->_contacts[this->_index].setNickname(input);
  }
  input = "";
  while (!std::cin.eof() && input == "")
  {
    std::cout << "Enter the new contact phone number > ";
    if (std::getline(std::cin, input) && input != "")
      this->_contacts[this->_index].setPhoneNumber(input);
  }
  input = "";
  while (!std::cin.eof() && input == "")
  {
    std::cout << "Enter the new contact darkest secret > ";
    if (std::getline(std::cin, input) && input != "")
      this->_contacts[this->_index].setDarkestSecret(input);
  }
  
  std::cout << this->_contacts[this->_index].getFirstName() << " succesfully added" << std::endl;
  this->_index++;
  if (this->_index == 8)
    this->_index = 0;
}

int  PhoneBook::showContacts(void) {
  int i;

  i = 0;
  while (i < 8 && this->_contacts[i].getFirstName() != "")
  {
    if (i == 0)
    {
      std::cout << " ___________________________________________ " << std::endl;
      std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
      std::cout << "|----------|----------|----------|----------|" << std::endl;
    }
    std::cout << "|" << std::setw(10) << i + 1;
    std::cout << "|" << std::setw(10) << displayString(this->_contacts[i].getFirstName());
    std::cout << "|" << std::setw(10) << displayString(this->_contacts[i].getLastName());
    std::cout << "|" << std::setw(10) << displayString(this->_contacts[i].getNickname());
    std::cout << "|" << std::endl;
    i++;
  }
  if (i == 0)
  {
    std::cout << "The phonebook is empty" << std::endl;
    return (0);
  }
  else
  {
    std::cout << " ------------------------------------------- " << std::endl;
    return (1);
  }
}

void  PhoneBook::getContact(int n) {
  if (n < '1' || n > '8' || this->_contacts[n -= '1'].getFirstName() == "")
  {
    std::cout << "Invalid index!" << std::endl;
    return ;
  }
  std::cout << "First Name: " << this->_contacts[n].getFirstName() << std::endl;
  std::cout << "Last Name: " << this->_contacts[n].getLastName() << std::endl;
  std::cout << "Nickname: " << this->_contacts[n].getNickname() << std::endl;
  std::cout << "Phone Number: " << this->_contacts[n].getPhoneNumber() << std::endl;
  std::cout << "Darkest Secret: " << this->_contacts[n].getDarkestSecret() << std::endl;
}
