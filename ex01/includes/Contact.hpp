#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class	Contact {
  private :
    std::string _name;
    std::string _lastName;

  public :
    Contact();
    ~Contact();

    void  setName(std::string name);
    void  setLastName(std::string name);
    
    std::string getName(void);
    std::string getLastName(void);
};

#endif