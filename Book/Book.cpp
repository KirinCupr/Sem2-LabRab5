#include "Book.h"

namespace ZKN
{
    Book::Book(string title, string author, string description, int year)
    {
        this->title = title;
        this->author = author;
        this->description = description;
        this->yearOfCreate = year;
    };

    Book::Book(): title("Auto title"), author("Auto author"),
                  description("Auto description"), yearOfCreate(9999) {}

    Book Book::operator=(Book b)
    {
        this->title = b.title;
        this->author = b.author;
        this->description = b.description;
        this->yearOfCreate = b.yearOfCreate;

        return *this;
    }
    void Book::printInfo() const
    {
        cout << "Title: " << title << ";\t" <<
                "Author: " << author << ";\t" <<
                "Description: " << description << ";\t" <<
                "Year of creation: " << yearOfCreate << endl;
    }
}