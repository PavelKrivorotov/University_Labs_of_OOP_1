#include "b2.h"
using namespace std;

B2::B2(int b2) {
    _b2 = b2;

    cout << "Worked B2 class constructor! Value = " + to_string(b2) << endl;
}


B2::~B2() {
    cout << "Destructor B2." << endl;
}


void B2::showB2() {
    cout << "B2 = " << _b2 << endl;
}

