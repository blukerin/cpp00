#include "../includes/Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void  Contact::setFirstName(std::string name) {
  this->_firstName = name;
}
void  Contact::setLastName(std::string lastName) {
  this->_lastName = lastName;
}
void  Contact::setNickname(std::string nickName) {
  this->_nickname = nickName;
}
void  Contact::setDarkestSecret(std::string darkestSecret) {
  this->_darkestSecret = darkestSecret;
}
void  Contact::setPhoneNumber(std::string phoneNumber) {
  this->_phoneNumber = phoneNumber;
}

std::string Contact::getFirstName(void) {
  return (this->_firstName);
}
std::string Contact::getLastName(void) {
  return (this->_lastName);
}
std::string Contact::getNickname(void) {
  return (this->_nickname);
}
std::string Contact::getDarkestSecret(void) {
  return (this->_darkestSecret);
}
std::string Contact::getPhoneNumber(void) {
  return (this->_phoneNumber);
}