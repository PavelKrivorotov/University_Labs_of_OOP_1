#include "d3.h"
using namespace std;

D3::D3(int d3, int d2, int d1, int b1, int b2, int b3): D2(d2, d1, b1, b2), B3(b3) {
    _d3 = d3;

    cout << "Worked D3 class constructor! Value = " + to_string(d3) << endl;
}


D3::~D3() {
    cout << "Destructor D3." << endl;
}


void D3::showD3() {
    cout << "D3 = " << _d3 << endl;

    showD2();
    showB3();
}

