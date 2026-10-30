#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class	Contact {
  private :
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _darkestSecret;
    std::string _phoneNumber;

  public :
    Contact();
    ~Contact();

    void  setFirstName(std::string firstName);
    void  setLastName(std::string lastName);
    void  setNickname(std::string nickName);    
    void  setDarkestSecret(std::string darkestSecret);
    void  setPhoneNumber(std::string phoneNumber);

    std::string getFirstName(void);
    std::string getLastName(void);
    std::string getNickname(void);
    std::string getDarkestSecret(void);
    std::string getPhoneNumber(void);
};

#endif