#ifndef SEM2_LABRAB3_READER_H
#define SEM2_LABRAB3_READER_H
#include "D:\Project_C++\Sem2_LabRab3\User\User.h"
#include <string>
#include <fstream>
#include "D:\Project_C++\Sem2_LabRab3\Card\Card.h"
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
