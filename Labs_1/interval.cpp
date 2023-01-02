#include "interval.h"

Interval::Interval(double left, double right) {
    _left = left;
    _right = right;
}


Interval::~Interval() {

}


void Interval::setLeft(double left) {
    _left = left;
}


void Interval::setRight(double right) {
    _right = right;
}


bool Interval::rangeCheck(double value) {
    if ((value >= _left) && (value < _right)) {
        return true;
    }

    return false;
}
