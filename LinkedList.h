#pragma once

#include "Node.h"
#include <string>

class LinkedList {
    private:
        Node * head;
        Node * tail;

    public:
        LinkedList();
    public:
        void add(int value);
    public:
        void reverse();
    public:
        std::string print();
};