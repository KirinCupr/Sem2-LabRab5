#ifndef SEM2_LABRAB3_READER_H
#define SEM2_LABRAB3_READER_H
#include "../User/User.h"
#include "../Card/Card.h"
#include <string>
#include <fstream>

namespace ZKN
{
    class Reader : User
    {
    public:
        Reader();
        Reader(string lastname, string name, int age, Card card);
        void print();
        Reader operator= (Reader r1);
        Card getCard() const;
        bool compare(Reader r);
        friend ostream& operator<< (ostream& out, const Reader &r);
        //friend istream& operator>>(istream in, const Reader &r);
    private:
        Card card;
    };
}


#endif //SEM2_LABRAB3_READER_H
