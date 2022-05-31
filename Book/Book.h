#ifndef SEM2_LABRAB3_BOOK_H
#define SEM2_LABRAB3_BOOK_H
#include <string>
#include <iostream>

using namespace std;
namespace ZKN
{
    class Book
    {
    public:
        Book();
        Book(string title, string author, string description, int);
        void printInfo() const;
        Book operator=(Book b);
    private:
        string title{"Title"};
        string author{"Author"};
        string description{"Description"};
        int yearOfCreate{0};
    };
}



#endif //SEM2_LABRAB3_BOOK_H
