#include "Card.h"

namespace ZKN
{
    Card::Card()
    {
        Book *Books = new Book [count];
        for (int i = 0; i < count; i++) Books[i] = Book();
        this->books = Books;
        for (int i = 0; i < count; i++) books[i] = Books[i];
    }
    Card::Card(int count, Book *books, int year, int period)
    {
        this->count = count;
        this->books = books;
        for (int i = 0; i < count; i++){
            this->books[i] = books[i];
        }
        this->yearOfIssue = year;
        this->period = period;
    }

    int Card::getCount() const { return count; }

    Book& Card::operator[](const int index) const { return books[index]; }

    void Card::print()
    {
        cout << "Books: \n"
                "Count: " << count << endl;

        for (int i = 0; i < count; i++)
        {
            cout << i+1 << ". ";
            books[i].printInfo();
        }
    }
}