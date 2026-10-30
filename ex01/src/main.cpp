#include "../includes/PhoneBook.hpp"

int main()
{
  PhoneBook phone;
  std::string input;

  while (input != "EXIT")
  {
    std::cout << "\nPossible inputs: 'ADD' - 'SEARCH' - 'EXIT'" << std::endl;
    std::cout << "Enter a command > ";
    std::getline(std::cin, input);
    if (std::cin.eof())
    {
      std::cout << std::endl;
      break ;
    }
    if (input == "ADD")
      phone.addContact();
    else if (input == "SEARCH")
    {
      if (phone.showContacts())
      {
        std::cout << "Select the contact index > ";
        std::getline(std::cin, input);
        if (std::cin.eof())
        {
          std::cout << std::endl;
          break ;
        }
        if (input.length() != 1)
          std::cout << "Invalid input!" << std::endl;
        else
          phone.getContact((int)input[0]);
      }
    }
  }
  return (0);
}