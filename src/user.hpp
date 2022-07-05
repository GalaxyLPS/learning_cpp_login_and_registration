//
// Created by GalaxyLPS on 04.07.2022.
//


#ifndef LOGIN_AND_REGISTRATION_USER_HPP
#define LOGIN_AND_REGISTRATION_USER_HPP

#include <string>

class User {
public:
    std::string name;
    std::string password;

    User(std::string name, std::string password) {
        this->name = name;
        this->password = password;
    }

};


#endif //LOGIN_AND_REGISTRATION_USER_HPP
