#ifndef SEM2_LABRAB3_MENU_H
#define SEM2_LABRAB3_MENU_H

#include "D:\Project_C++\Sem2_LabRab3\ItemMenu\ItemMenu.h"
#include <cstddef>

namespace ZKN
{
    class Menu {
    public:
        Menu(char *, ItemMenu *, size_t);
        void print();
        int runCommand();

    private:
        int select{};
        size_t count{};
        char * title{};
        ItemMenu *items{};
    };

}


#endif //SEM2_LABRAB3_MENU_H
