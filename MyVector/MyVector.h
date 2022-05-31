#ifndef SEM2_LABRAB3_MYVECTOR_H
#define SEM2_LABRAB3_MYVECTOR_H

#include "Iterator.h"
#include <iostream>
using namespace std;

    template <typename T>
    class MyVector {
    public:
        MyVector();
        Iterator<T> begin();
        Iterator<T> end();
        Iterator<T> begin() const;
        Iterator<T> end() const;
        void AddMemory();
        void PushBack(const T&);
        void Remove(size_t);
        size_t Size();
        friend ostream& operator<<(ostream&, const MyVector<T>&);
        T& operator[](int i);

    private:
        T* m_array{};
        size_t m_size{};
        size_t m_capacity{};
    };

    template <typename T>
    MyVector<T>::MyVector() {
        m_array = new T[1];
        m_size = 0;
        m_capacity = 1;
    }

    template <typename T>
    Iterator<T> MyVector<T>::begin() {
        return Iterator<T>(m_array);
    }
    template <typename T>
    Iterator<T> MyVector<T>::end() {
        return Iterator<T>(m_array + m_size);
    }
    template <typename T>
    Iterator<T> MyVector<T>::begin() const {
        return Iterator<T>(m_array);
    }
    template <typename T>
    Iterator<T> MyVector<T>::end() const {
        return Iterator<T>(m_array + m_size);
    }

    template <typename T>
    size_t MyVector<T>::Size() {
        return m_size;
    }
    template <typename T>
    void MyVector<T>::AddMemory() {
        m_capacity *= 2;
        T* tmp = m_array;
        m_array = new T[m_capacity];
        for (size_t i = 0; i < m_size; i++) {
            m_array[i] = tmp[i];
        }
        delete[] tmp;
    }
    template <typename T>
    void MyVector<T>::PushBack(const T& value) {
        if (m_size >= m_capacity) {
            AddMemory();
        }
        m_array[m_size] = value;
        m_size++;
    }
    template <typename T>
    void MyVector<T>::Remove(size_t index) {
        for (size_t i = index + 1; i < m_size; ++i) {
            m_array[i - 1] = m_array[i];
        }
        m_size--;
    }

    template <typename T>
    ostream& operator<<(ostream& out, const MyVector<T>& obj) {
        for (int i = 0; i < obj.m_size; i++) {
            out << obj.m_array[i];
        }
        out << "\n";
        return out;
    }
    template <typename T>
    T& MyVector<T>::operator[](int i) {
        return m_array[i];
    }


#endif //SEM2_LABRAB3_MYVECTOR_H
