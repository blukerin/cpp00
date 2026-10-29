#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() {
  this->_index = 0; 
  std::cout << "Welcome to Crappy! Your own phonebook for up to 8 contacts" << std::endl;
}

PhoneBook::~PhoneBook() {
  std::cout << "End of Crappy, see you soon!" << std::ends;
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
  while (!std::cin.eof() && input == "")
  {
    std::cout << "Enter the new contact last name > ";
    if (std::getline(std::cin, input) && input != "")
      this->_contacts[this->_index].setLastName(input);
  }
  while (!std::cin.eof() && input == "")
  {
    std::cout << "Enter the new contact nickname > ";
    if (std::getline(std::cin, input) && input != "")
      this->_contacts[this->_index].setNickname(input);
  }
  while (!std::cin.eof() && input == "")
  {
    std::cout << "Enter the new contact phone number > ";
    if (std::getline(std::cin, input) && input != "")
      this->_contacts[this->_index].setPhoneNumber(input);
  }
  while (!std::cin.eof() && input == "")
  {
    std::cout << "Enter the new contact darkest secret > ";
    if (std::getline(std::cin, input) && input != "")
      this->_contacts[this->_index].setDarkestSecret(input);
  }
  
  std::cout << this->_contacts[this->_index].getFirstName() << "succerfully added" << std::endl;
  this->_index++;
  if (this->_index == 8)
    this->_index = 0;
}

void  PhoneBook::showContacts(void) {
  int i = 0;

  std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
  while (i )
  
  std::cout << " ------------------------------------------- " << std::endl;
  
  if (i == 0)
    std::cout << "The phonebook is empty" << std::endl;
}

