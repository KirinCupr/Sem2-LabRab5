#ifndef SEM2_LABRAB3_ITERATOR_H
#define SEM2_LABRAB3_ITERATOR_H

#include <iostream>
using namespace std;
namespace ZKN {
    template<typename T>
    class Iterator {
        template<typename V>
        friend class MyVector;

    public:
        Iterator(const Iterator<T> &);

        bool operator==(const Iterator<T> &) const;

        bool operator!=(const Iterator<T> &) const;

        Iterator<T> &operator++();

        T &operator*() const;

    private:
        T *m_worker;

        Iterator(T *p) : m_worker(p) {};
    };


    template<typename T>
    Iterator<T>::Iterator(const Iterator &it) : m_worker(it.m_worker) {}

    template<typename T>
    bool Iterator<T>::operator==(const Iterator<T> &it) const {
        return m_worker == it.m_worker;
    }

    template<typename T>
    bool Iterator<T>::operator!=(const Iterator<T> &it) const {
        return m_worker != it.m_worker;
    }

    template<typename T>
    Iterator<T> &Iterator<T>::operator++() {
        m_worker++;
        return *this;
    }

    template<typename T>
    T &Iterator<T>::operator*() const {
        return *m_worker;
    }
}


#endif //SEM2_LABRAB3_ITERATOR_H
