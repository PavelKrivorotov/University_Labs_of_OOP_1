#include "money.h"

Money::Money() {
    _countCoins10 = 0;
    _countCoins50 = 0;
    _countCoins100 = 0;
    _countCoins500 = 0;
    _countCoins1000 = 0;
    _countCoins5000 = 0;
}


Money::Money(int countCoins10, int countCoins50, int countCoins100, int countCoins500,
             int countCoins1000, int countCoins5000) {

    _countCoins10 = countCoins10;
    _countCoins50 = countCoins50;
    _countCoins100 = countCoins100;
    _countCoins500 = countCoins500;
    _countCoins1000 = countCoins1000;
    _countCoins5000 = countCoins5000;
}


Money::~Money() {

}


int Money::getCountCoins10() {
    return _countCoins10;
}


int Money::getCountCoins50() {
    return _countCoins50;
}


int Money::getCountCoins100() {
    return _countCoins100;
}


int Money::getCountCoins500() {
    return _countCoins500;
}


int Money::getCountCoins1000() {
    return _countCoins1000;
}


int Money::getCountCoins5000() {
    return _countCoins5000;
}


int Money::getSumCoins() {
   int sum = 0;

   sum += 10 * _countCoins10;
   sum += 50 * _countCoins50;
   sum += 100 * _countCoins100;
   sum += 500 * _countCoins500;
   sum += 1000 * _countCoins1000;
   sum += 5000 * _countCoins5000;

   return sum;
}


void Money::setCountCoins10(int deltaCount) {
    _countCoins10 += deltaCount;
}


void Money::setCountCoins50(int deltaCount) {
    _countCoins50 += deltaCount;
}


void Money::setCountCoins100(int deltaCount) {
    _countCoins100 += deltaCount;
}


void Money::setCountCoins500(int deltaCount) {
    _countCoins500 += deltaCount;
}


void Money::setCountCoins1000(int deltaCount) {
    _countCoins1000 += deltaCount;
}


void Money::setCountCoins5000(int deltaCount) {
    _countCoins5000 += deltaCount;
}

