#ifndef SEM2_LABRAB3_USER_H
#define SEM2_LABRAB3_USER_H
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
namespace ZKN{
    class User {
    public:
        virtual void setName(string name);
        virtual string getName() const;

        virtual void setlastName(string lastName);
        virtual string getlastName() const;

        virtual void setAge(int age);
        virtual int  getAge() const;

        virtual void setLogin(string login);
        virtual string getLogin() const;

        virtual void setPassword(string parol);
        virtual string getPassword() const;

        virtual void print() const;

    protected:
        string lastname{"lastname"};
        string name{"name"};
        int age{0};
        string login{"default"};
        string password{"default"};
    };
}

#endif //SEM2_LABRAB3_USER_H
