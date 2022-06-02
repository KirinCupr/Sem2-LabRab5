#ifndef SEM2_LABRAB3_CARD_H
#define SEM2_LABRAB3_CARD_H
#include "../Book/Book.h"
#include "../MyVector/MyVector.h"
#include <iostream>

namespace ZKN
{
    class Card
    {
    public:
        Card();
        Card(int count, MyVector<Book>, int year, int period);
        void print();
        int getCount() const;
        Book& operator[](const int index);

    private:
        int count{3};
        MyVector<Book> books;
        int yearOfIssue{0};
        int period{0};
    };
}


#endif //SEM2_LABRAB3_CARD_H
