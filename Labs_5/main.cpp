#include <iostream>
using namespace std;

#include "d3.h"

int main() {
    D3 *d3 = new D3(3, 2, 1, 10, 20, 30);

    cout << endl;
    cout << "Call sequence by functions show() fromm class D3(3, 2, 1, 10, 20, 30):" << endl;

    d3->showD3();

    cout << endl;

    delete d3;

    return 0;
}

