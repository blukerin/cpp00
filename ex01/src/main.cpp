#include "../includes/PhoneBook.hpp"

int main()
{
  PhoneBook phone;
  std::string input;

  while (input != "EXIT")
  {
    std::cout << "Enter a command >";
    std::getline(std::cin, input);
    if (std::cin.eof())
    {
      std::cout << std::ends;
      break ;
    }
    if (input == "ADD")
      phone.addContact();
    else if (input == "SEARCH")
      phone.showContacts();
  }
  return (0);
}