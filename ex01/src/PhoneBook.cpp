#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(): _index(0) {}

PhoneBook::~PhoneBook(){}

void PhoneBook::addContact(std::string newContactName)
{
  this->_contacts[this->_index].setName(newContactName);
  this->_index++;
  if (this->_index == 8)
    this->_index = 0;
}

std::string	PhoneBook::getNameContact(int nContact)
{
  return(this->_contacts[nContact].getName());
}
