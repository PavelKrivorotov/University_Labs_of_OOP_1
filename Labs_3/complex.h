#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>


class Complex {

public:
    Complex(double rePart = 0, double imPart = 0);
    virtual ~Complex();

    bool operator == (const Complex &number);
    bool operator != (const Complex &number);
    void operator = (const Complex &number);
    Complex operator + (const Complex &number);
    Complex operator - (const Complex &number);
    Complex operator * (const Complex &number);
    Complex operator / (const Complex &number);

    friend bool operator == (const Complex &number1, const Complex &number2);
    friend bool operator != (const Complex &number1, const Complex &number2);
    friend Complex operator + (const Complex &number1, const Complex &number2);
    friend Complex operator - (const Complex &number1, const Complex &number2);
    friend Complex operator * (const Complex &number1, const Complex &number2);
    friend Complex operator / (const Complex &number1, const Complex &number2);

    std::string toString();

    static Complex fromString(std::string str);

private:
    double _rePart;
    double _imPart;
};

#endif // COMPLEX_H
