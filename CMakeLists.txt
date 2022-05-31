cmake_minimum_required(VERSION 3.20)
project(Sem2_LabRab5)

set(CMAKE_CXX_STANDARD 11)

add_executable(Sem2_LabRab5
        main.cpp
        Menu/Menu.cpp Menu/Menu.h
        ItemMenu/ItemMenu.cpp ItemMenu/ItemMenu.h
        User/User.cpp User/User.h
        Reader/Reader.cpp Reader/Reader.h
        Worker/Worker.cpp Worker/Worker.h
        Book/Book.cpp Book/Book.h
        Card/Card.cpp Card/Card.h
        Storage/Storage.cpp Storage/Storage.h MyVector/Iterator.h MyVector/MyVector.h)
