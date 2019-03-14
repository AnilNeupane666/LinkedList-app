#include <iostream>
#include "Bull.h"
#include "LinkedList.h"

using namespace std;

int main() {
    Bull boris(10, 20, "boris");
    cout << boris.to_string() << endl;

    LinkedList list;
    list.add(20);
    list.add(45);
    cout << list.print() << endl;
    return 0;
}