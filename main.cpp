#include <iostream>
#include <string>
#include "Menu/Menu.h"
#include "Reader/Reader.h"
#include "D:\Project_C++\Sem2_LabRab3\MyVector\MyVector.h"

using namespace std;
using namespace ZKN;

int makeList()
{
    cout << "Make list " << endl;
    const int count = 3;
    Book book1 = Book("Hobbit", "Tolkin", "Breathtaking journey has began", 1937);
    Book book2 = Book("Mertvie dushi", "Gogol", "Story about out country", 1842);
    Book book3 = Book("Voina i mir", "Tolstoi", "Historic epos about Great War 1812", 1863);
    Book books[count] = {book1, book2, book3};
    Card card = Card(3, books, 2020, 5);

    card.print();
    cout << endl;

    Reader reader = Reader("Popov", "Sergei", 20, card);

    reader.print();
    cout << endl;cout << endl;

    Reader reader2 = Reader("Anin", "Max", 23, card);
    cout << "=====================\n";
    cout << reader2.compare(reader);
    cout << "\n=====================\n";
    return 1;
}
int countReader = 3;

MyVector<Reader> v1;

int makeReaders()
{
    const int count1 = 3;
    Book book1 = Book((string) "Hobbit", (string)"Tolkin", (string)"Breathtaking journey has began", 1937);
    Book book2 = Book("Mertvie dushi", "Gogol", "Story about out country", 1842);
    Book book3 = Book("Voina i mir", "Tolstoi", "Historic epos about Great War 1812", 1863);
    Book books1[count1] = {book1, book2, book3};
    Card card1 = Card(count1, books1, 2020, 5);
    Reader r1= Reader("Popov", "Sergei", 20, card1);

    Book b4 = Book();
    Book b5 = Book();
    const int count2 = 2;
    Book books2[] = {b4, b5};
    Card card2 = Card(count2, books2, 2018, 4);
    Reader r2 = Reader("Kamnev", "Igor", 25, card2);

    const int count3 = 3;
    Book books3[count3] = {b4, book2, book1};
    Card card3 = Card(count3, books3, 2018, 6);
    Reader r3 = Reader("Vasilev", "Dmitriy", 19, card3);

    v1.PushBack(r1);
    v1.PushBack(r2);
    v1.PushBack(r3);

    cout << v1;
    cout << endl;
    return 2;
}

int addReader()
{
    cout << "Add reader" << endl;
    cout << "Enter new reader's lastname: "; string lastname; cin >> lastname;
    cout << "Enter new reader's name: "; string name; cin >> name;
    cout << "Enter new reader's age: "; int age; cin >> age;
    Book b4 = Book();
    Book b5 = Book();
    const int count2 = 2;
    Book books2[count2] = {b4, b5};
    Card card = Card(count2, books2, 2018, 4);

    Reader reader = Reader(lastname, name, age, card);

    v1.PushBack(reader);
    cout << v1;
    cout << endl;
    return 3;
}

int removeReader()
{
    cout << "Remove Reader" << endl;

    cout << v1;

    cout << "Enter Reader's number: "; int enter{}; cin >> enter;
    enter--;
    v1.Remove(enter);
    cout << v1;
    cout << endl;
    return 4;
}

int sortReaders()
{
    cout << "Enter '1' sort Reader: "; int enter; cin >> enter;
    if (enter != 1 || enter == 0) return 5;

    for (int i=0; i < v1.Size(); i++)
        for (int j = 0; j < i; ++j) {
            if (v1[i].compare(v1[j])) {
                cout << 66 << endl;
                Reader tmp = v1[j];
                v1[j] = v1[i];
                v1[i] = tmp;
            }
        }
    cout << v1;
    cout << endl;
    return 5;
}
const int count = 5;
int main() {
    using namespace ZKN;

    ItemMenu items[count]{ItemMenu{"Item: make Reader", makeList},
                          ItemMenu{"Item: make and print Readers", makeReaders},
                          ItemMenu{"Item: add Reader", addReader},
                          ItemMenu{"Item: remove Reader", removeReader},
                          ItemMenu{"Item: sort Readers", sortReaders}};

    Menu menu("Menu", items, count);

    while (menu.runCommand()) {};
    return 0;
}
