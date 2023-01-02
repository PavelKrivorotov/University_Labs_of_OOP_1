#include "b3.h"
using namespace std;

B3::B3(int b3) {
    _b3 = b3;

    cout << "Worked B3 class constructor! Value = " + to_string(b3) << endl;
}


B3::~B3() {
    cout << "Destructor B3." << endl;
}


void B3::showB3() {
    cout << "B3 = " << _b3 << endl;
}

