//
// Created by galax on 04.07.2022.
//

#include "session_manager.hpp"

void SessionManager::load() {
    std::string content;
    const char* delim = ";";
    while(std::getline(file, content)) {
        size_t t = content.find(delim);
        auto name = content.substr(5, t - 5);
        auto password = content.substr(t + 10);
        this->users.push_back(new User(name, password));
    }
}

void SessionManager::save() {
    for (const auto &item: this->users) {
        const auto str = "name:" + item->name + ";password" + item->password;
        file.write(str.c_str(), str.length());
    }
    file.flush();
}

void SessionManager::add(User* user) {
    this->users.push_back(user);
}

const User* SessionManager::verify_credentials(std::string name, std::string password) {
    for (User* item: this->users) {
        if (std::equal(item->name.begin(), item->name.end(), name.begin())
        && std::equal(item->password.begin(), item->password.end(), password.begin())) {
            return item;
        }
    }
    return nullptr;
}
