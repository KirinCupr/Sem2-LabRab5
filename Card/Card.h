#ifndef SEM2_LABRAB3_CARD_H
#define SEM2_LABRAB3_CARD_H
#include "D:\Project_C++\Sem2_LabRab3\Book\Book.h"
#include <iostream>

namespace ZKN
{
    class Card
    {
    public:
        Card();
        Card(int count, Book *books, int year, int period);
        void print();
        int getCount() const;
        Book& operator[](const int index) const;

    private:
        int count{3};
        Book *books{0};
        int yearOfIssue{0};
        int period{0};
    };
}


#endif //SEM2_LABRAB3_CARD_H
