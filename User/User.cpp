//
// Created by Newdr on 15.05.2022.
//

#include "User.h"

using namespace std;
namespace ZKN
{
    void User::setName(string name) { this->name = name; }
    string User::getName() const { return this->name; }

    void User::setlastName(string lastName) { this->lastname = lastName; }
    string User::getlastName() const { return this->lastname; }

    void User::setAge(int age) { this->age = (age > 0) ? age : 0; }
    int User::getAge() const { return this-> age; }

    void User::setLogin(string login) { this->login = login; }
    string User::getLogin() const { return this->login; }

    void User::setPassword(string parol) { this->password = parol; }
    string User::getPassword() const { return this->password; }

    void User::print() const
    {
        std::cout << "\nName: " << name
                  << ";Lastname: " << lastname
                  << ";Age: " << age;
    }
}