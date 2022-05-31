//
// Created by Newdr on 15.05.2022.
//

#ifndef SEM2_LABRAB3_ITEMMENU_H
#define SEM2_LABRAB3_ITEMMENU_H

namespace ZKN
{
    class ItemMenu {
    public:
        typedef int (*Func)();
        ItemMenu(char *, Func);
        Func func{};
        char * name;
        void print();
        int run();

    };

}

#endif //SEM2_LABRAB3_ITEMMENU_H
