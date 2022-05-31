#ifndef SEM2_LABRAB3_STORAGE_H
#define SEM2_LABRAB3_STORAGE_H
#include "D:\Project_C++\Sem2_LabRab3\Reader\Reader.h"
namespace ZKN
{
    class Storage
    {
    public:
        Storage(int size);
        Storage(int count, Reader *readers);
        void print();
        Storage operator= (Storage storage);
        Reader& operator[] (const int index);
        Storage add(Reader reader);
    private:
        int count{};
        Reader *readers;
    };
}



#endif //SEM2_LABRAB3_STORAGE_H
