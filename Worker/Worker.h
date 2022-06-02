#ifndef SEM2_LABRAB3_WORKER_H
#define SEM2_LABRAB3_WORKER_H
#include "../User/User.h"
#include <string>
namespace ZKN
{
    class  Worker : User
    {
    public:
        Worker();
        Worker(string lastname, string name, int age);
    private:

    };
}



#endif //SEM2_LABRAB3_WORKER_H
