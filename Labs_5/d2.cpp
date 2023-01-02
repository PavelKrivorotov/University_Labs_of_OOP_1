#include "d2.h"
using namespace std;

D2::D2(int d2, int d1, int b1, int b2): D1(d1, b1, b2) {
    _d2 = d2;

    cout << "Worked D2 class constructor! Value = " + to_string(d2) << endl;
}


D2::~D2() {
    cout << "Destructor D2." << endl;
}


void D2::showD2() {
    cout << "D2 = " << _d2 << endl;

    showD1();
}

