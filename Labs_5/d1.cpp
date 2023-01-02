#include "d1.h"
using namespace std;

D1::D1(int d1, int b1, int b2): B1(b1), B2(b2) {
    _d1 = d1;

    cout << "Worked D1 class constructor! Value = " + to_string(d1) << endl;
}


D1::~D1() {
    cout << "Destructor D1." << endl;
}


void D1::showD1() {
    cout << "D1 = " << _d1 << endl;

    showB1();
    showB2();
}

