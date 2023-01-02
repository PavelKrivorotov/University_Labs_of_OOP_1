#include "complex.h"
using namespace std;

Complex::Complex(double rePart, double imPart) {
    _rePart = rePart;
    _imPart = imPart;
}


Complex::~Complex() {

}


bool Complex::operator == (const Complex &number) {
    if ((_rePart == number._rePart) && (_imPart == number._imPart)) { return true; }
    return false;
}


bool operator == (const Complex &number1, const Complex &number2) {
    if ((number1._rePart == number2._rePart) && (number1._imPart == number2._imPart)) { return true; }
    return false;
}


bool Complex::operator != (const Complex &number) {
    if ((_rePart == number._rePart) && (_imPart == number._imPart)) { return false; }
    return true;
}


bool operator != (const Complex &number1, const Complex &number2) {
    if ((number1._rePart == number2._rePart) && (number1._imPart == number2._imPart)) { return false; }
    return true;
}


void Complex::operator = (const Complex &number) {
    _rePart = number._rePart;
    _imPart = number._imPart;
}


Complex Complex::operator + (const Complex &number) {
    double rePart = _rePart + number._rePart;
    double imPart = _imPart + number._imPart;

    return Complex(rePart, imPart);
}


Complex operator + (const Complex &number1, const Complex &number2) {
    double rePart = number1._rePart + number2._rePart;
    double imPart = number1._imPart + number2._imPart;

    return Complex(rePart, imPart);
}


Complex Complex::operator - (const Complex &number) {
    double rePart = _rePart - number._rePart;
    double imPart = _imPart - number._imPart;

    return Complex(rePart, imPart);
}


Complex operator - (const Complex &number1, const Complex &number2) {
    double rePart = number1._rePart - number2._rePart;
    double imPart = number1._imPart - number2._imPart;

    return Complex(rePart, imPart);
}


Complex Complex::operator * (const Complex &number) {
    double rePart = _rePart * number._rePart - _imPart * number._imPart;
    double imPart = _rePart * number._imPart + _imPart * number._rePart;

    return Complex(rePart, imPart);
}


Complex operator * (const Complex &number1, const Complex &number2) {
    double rePart = number1._rePart * number2._rePart - number1._imPart * number2._imPart;
    double imPart = number1._rePart * number2._imPart + number1._imPart * number2._rePart;

    return Complex(rePart, imPart);
}


Complex Complex::operator / (const Complex &number) {
    double rePart = _rePart * number._rePart + _imPart * number._imPart;
    double imPart = _imPart * number._rePart - _rePart * number._imPart;

    double div = number._rePart * number._rePart + number._imPart * number._imPart;

    rePart = rePart / div;
    imPart = imPart / div;

    return Complex(rePart, imPart);
}


Complex operator / (const Complex &number1, const Complex &number2) {
    double rePart = number1._rePart * number2._rePart + number1._imPart * number2._imPart;
    double imPart = number1._imPart * number2._rePart - number1._rePart * number2._imPart;

    double div = number2._rePart * number2._rePart + number2._imPart * number2._imPart;

    rePart = rePart / div;
    imPart = imPart / div;

    return Complex(rePart, imPart);
}


string Complex::toString() {
    if ((!_rePart) && (!_imPart)) { return "0"; }
    if (!_rePart) {return to_string(_imPart) + "i";}
    if (!_imPart) { return to_string(_rePart); }

    string complexString;
    complexString.append(to_string(_rePart));
    complexString.append(" ");

    if (_imPart > 0) { complexString.append("+"); } else { complexString.append("-"); }

    complexString.append(" ");
    complexString.append(to_string(abs(_imPart)));
    complexString.append("i");

    return complexString;
}


Complex Complex::fromString(string str) {
    string rePart = "";
    string imPart = "";

    int ind = 0;

    if ((string(1, str.at(0)) == "+") || (string(1, str.at(0)) == "-")) {
        rePart.append(string(1, str.at(0)));
        ind++;
    }

    else {
        rePart.append("+");
    }

    while ((string(1, str.at(ind)) != "+") && (string(1, str.at(ind)) != "-")) {
        rePart.append(string(1, str.at(ind)));
        ind++;
    }


    if ((string(1, str.at(ind)) == "+") || (string(1, str.at(ind)) == "-")) {
        imPart.append(string(1, str.at(ind)));
        ind++;
    }

    while (string(1, str.at(ind)) != "i") {
        imPart.append(string(1, str.at(ind)));
        ind++;
    }

    return Complex(stod(rePart), stod(imPart));
}

