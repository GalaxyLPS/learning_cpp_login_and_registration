#include <iostream>
#include "user.hpp"
#include "session_manager.hpp"


int main() {
    auto sessionManager = new SessionManager();
    sessionManager->load();

    User* user = new User("Usrname", "Password");

    sessionManager->add(user);
    auto u = sessionManager->verify_credentials("Username", "Password");
    if(u) {
        std::cout << "Username: " << u->name << ", Password: " << u->password << std::endl;
    }

    std::cout << "The name is: " << user->name << std::endl;

    sessionManager->save();

    delete sessionManager;
    delete user;
    return 0;
}
