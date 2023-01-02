#include <iostream>
using namespace std;

#include "interval.h"


int main() {
    Interval *interval = new Interval();
    interval->setLeft(-12.7);
    interval->setRight(90.09);

    double value1, value2, value3, value4;
    value1 = -12.7;
    value2 = 21;
    value3 = 90.09;
    value4 = 90.091;

    cout << "The interval will be set from -12.7 to 90.09\n" << endl;

    cout << "The value1 = " << value1 << " contain set interval -- " << interval->rangeCheck(value1) << endl;
    cout << "The value1 = " << value2 << " contain set interval -- " << interval->rangeCheck(value2) << endl;
    cout << "The value1 = " << value3 << " contain set interval -- " << interval->rangeCheck(value3) << endl;
    cout << "The value1 = " << value4 << " contain set interval -- " << interval->rangeCheck(value4) << endl;

    delete interval;
}
