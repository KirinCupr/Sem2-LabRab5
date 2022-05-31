#include "Storage.h"

namespace ZKN
{
    Storage::Storage(int size)
    {
        this->count = size;
        Reader *r = new Reader[count];
        for (int i = 0; i < count; ++i) r[i] = Reader();
        this->readers = r;
        for (int i = 0; i < this->count; i++) this->readers[i] = r[i];
    }
    Storage::Storage(int count,Reader *readers)
    {
        this->count = count;
        this->readers = readers;
        for (int i = 0; i < count; i++) this->readers[i] = Reader();
        for (int i = 0; i < count; i++) this->readers[i] = readers[i];
    }

    void Storage::print()
    {
        for(int i = 0; i < count; i++)
        {
            readers[i].print();
        }
    }

    Storage Storage::operator=(Storage storage)
    {
        this->count = storage.count;
        this->readers = storage.readers;
        for (int i = 0; i < storage.count; i++) this->readers[i] = storage[i];

        return *this;
    }

    Reader& Storage::operator[] (const int index)
    {
        return this->readers[index];
    };
    Storage Storage::add(Reader reader)
    {
        this->count += 1;
        Storage *newStorage = new Storage(count);
        newStorage->count = this->count;

        for (int i = 0; i < newStorage->count - 1; i++)
            newStorage->readers[i] = this->readers[i];

        newStorage->readers[newStorage->count] = reader;

        return *newStorage;
    }
}