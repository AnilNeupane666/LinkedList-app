#pragma once

class Node {
    private:
        int data;
        Node * next;

    public:
        void set_next(Node * node);
        Node * get_next(void);
        int get_data(void);

        Node(int data);
};