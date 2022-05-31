#include <iostream>
#include "ItemMenu.h"
namespace ZKN
{
    ItemMenu::ItemMenu(char * name, Func func) : name(name), func(func) {}

    int ItemMenu::run() { return func(); }

    void ItemMenu::print() {std::cout << name; }
}
