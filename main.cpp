#include <iostream>
#include "Bull.h"
#include "Node.h"

using namespace std;

void print(Node * node) {
    cout << std::to_string(node->get_data()) + " ";
    Node * next = node->get_next();
    if ( next ) 
    {
        print(next);
    }
};

int main() {
    Bull boris(10, 20, "boris");
    cout << boris.to_string() << endl;

    Node start(0);
    Node second(1);
    Node third(2);
    Node last(3);

    start.set_next(&second);
    second.set_next(&third);
    third.set_next(&last);

    print(&start);

    return 0;
}