cmake_minimum_required(VERSION 3.20)
project(Sem2_LabRab5)

set(CMAKE_CXX_STANDARD 11)

add_executable(Sem2_LabRab5
        main.cpp
        Menu/Menu.cpp Menu/Menu.h
        ItemMenu/ItemMenu.cpp ItemMenu/ItemMenu.h
        User/User.h User/User.cpp
        Reader/Reader.h Reader/Reader.cpp
        Worker/Worker.h Worker/Worker.cpp
        Book/Book.h Book/Book.cpp
        Card/Card.h Card/Card.cpp
        MyVector/Iterator.h MyVector/MyVector.h)
