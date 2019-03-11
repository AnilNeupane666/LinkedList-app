#include <iostream>
#include "Bull.h"

using namespace std;

int main() {
    Bull boris(10, 20, "boris");
    cout << boris.to_string() << endl;

    return 0;
}