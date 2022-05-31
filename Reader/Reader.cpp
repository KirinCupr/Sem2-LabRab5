#include "Reader.h"

namespace ZKN
{
    Reader::Reader(string lastname, string name, int age, Card card)
    {
        this->lastname = lastname;
        this->name = name;
        this->age = age;
        this->card = card;
        for (int i = 0; i < this->card.getCount(); i++){
            this->card[i] = card[i];
        }
    }

    Reader::Reader()
    {
        this->lastname = "Auto lastname";
        this->name = "Auto name";
        this->age = 128;
        this->login = "Auto login";
        this->password = "Auto password";
        this->card = Card();
    }

    void Reader::print()
    {
        cout << "\nName: " << name << ";\t"
                  << "Lastname: " << lastname << ";\t"
                  << "Age: " << age << endl;
        card.print();
    }

    Reader Reader::operator=(Reader r1)
    {
        this->lastname = r1.lastname;
        this->name = r1.name;
        this->age = r1.age;
        this->login = r1.login;
        this->password = r1.password;

        for(int i = 0; i < this->card.getCount(); i++) this->card[i] = r1.card[i];

        return *this;
    }

    bool Reader::compare(Reader r)
    {
        return (this->lastname.compare(r.lastname) < 0);
    }

    ostream& operator<< (ostream& out, const Reader &r)
    {
        out << "\nName: " << r.name << ";\t"
            << "Lastname: " << r.lastname << ";\t"
            << "Age: " << r.age << endl;
        r.getCard().print();
        return out;
    }

//    istream& operator>> (istream& in, const Reader &r)
//    {
//        return in;
//    }

    Card Reader::getCard() const { return card; }
}