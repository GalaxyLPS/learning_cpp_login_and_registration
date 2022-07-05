//
// Created by galax on 04.07.2022.
//

#ifndef LOGIN_AND_REGISTRATION_SESSION_MANAGER_HPP
#define LOGIN_AND_REGISTRATION_SESSION_MANAGER_HPP

#include <list>
#include <fstream>
#include <iostream>
#include "user.hpp"

class SessionManager {
public:

    void load();
    void add(User* user);
    void save();
    const User* verify_credentials(std::string name, std::string password);

    SessionManager() {
        users = {};
        file.open("./../accounts.txt", std::ios::in | std::ios::out);
        if (!file) {
            std::cout << "Error upon opening file!" << std::endl;
            exit(0);
        }
    };

    ~SessionManager() {
        if(file) {
            file.close();
        }
    };
private:
    std::list<User*> users;
    std::fstream file;
};


#endif //LOGIN_AND_REGISTRATION_SESSION_MANAGER_HPP
