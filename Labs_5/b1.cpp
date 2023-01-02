#include "b1.h"
using namespace std;

B1::B1(int b1) {
    _b1 = b1;

    cout << "Worked B1 class constructor! Value = " + to_string(b1) << endl;
}


B1::~B1() {
    cout << "Destructor B1." << endl;
}


void B1::showB1() {
    cout << "B1 = " << _b1 << endl;
}

