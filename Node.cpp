#include "Node.h"

Node::Node(int data){
    this->data = data;
    this->next = nullptr;
}

void Node::set_next(Node * node){
    next = node;
}

Node * Node::get_next() {
    return next;
}

int Node::get_data() {
    return data;
}

