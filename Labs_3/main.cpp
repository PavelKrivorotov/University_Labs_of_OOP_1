#include "complex.h"
using namespace std;


int main() {
    Complex complex1 = Complex(1, 1);
    Complex complex2 = Complex(2, -3);
    Complex complex3 = Complex(1, 1);

    Complex complex4 = complex1 + complex2;
    Complex complex5 = complex1 - complex2;
    Complex complex6 = complex1 * complex2;
    Complex complex7 = complex1 / complex2;

    bool equal = complex1 == complex3;

    cout << "complex1: " << "Complex(1, 1) = " << complex1.toString() << endl;
    cout << "complex2: " << "Complex(2, -3) = " << complex2.toString() << endl;
    cout << "complex3: " << "Complex(1, 1) = " << complex3.toString() << endl;

    cout << endl;

    cout << "complex4: " << "complex1 + complex2 = " << complex4.toString() << endl;
    cout << "complex5: " << "complex1 - complex2 = " << complex5.toString() << endl;
    cout << "complex6: " << "complex1 * complex2 = " << complex6.toString() << endl;
    cout << "complex7: " << "complex1 / complex2 = " << complex7.toString() << endl;

    cout << endl;

    cout << "equal: " << "complex1 == complex3 is " << equal << endl;

    complex1 = complex2;

    cout << endl;

    cout << "After complex1 = complex2:" << endl;
    cout << "complex1 = " << complex1.toString() << endl;

    cout << endl;

    cout << "Convert string complex value to Complex class" << endl;

    complex7 = Complex::fromString("1990.98-2.989i");

    cout << "string = 1990.98-2.989i. " << "The Complex value is " << complex7.toString() << endl;

    return 0;
}
