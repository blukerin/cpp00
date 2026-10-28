#include "../includes/Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void  Contact::setName(std::string name) {
  this->_name = name;
}

void  Contact::setLastName(std::string lastName) {
  this->_lastName = lastName;
}

std::string Contact::getName(void) {
  return (this->_name);
}

std::string Contact::getLastName(void) {
  return (this->_lastName);
}
