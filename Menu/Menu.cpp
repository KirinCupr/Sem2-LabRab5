//
// Created by Newdr on 15.05.2022.
//
#include <iostream>
#include "Menu.h"

namespace ZKN
{
    Menu::Menu(char *title, ItemMenu *items, size_t count) : title(title), items(items), count(count) {};
    void Menu::print()
    {
        for (size_t i = 0; i < count; i++){
            std::cout << i + 1 << ". ";
            items[i].print();
            std::cout << std::endl;
        }
        std::cout << "0. Exit " << std::endl;
    }

    int Menu::runCommand()
    {
        print();
        std::cout << "\nSelect >> ";
        std::cin >> select;
        return (select != 0) ? (items[select-1].run()) : 0;
    }
};