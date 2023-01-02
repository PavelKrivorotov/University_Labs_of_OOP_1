#include "array.h"

#include "myexception.h"

using namespace std;

Array::Array(int *arr, int size) {
    _correctSize = 12;
    _size = size;

    _array = arr;

    for (int index = 0; index < size; index++) {
        _array[index] = rand() % 100;
    }
}


Array::~Array() {
    delete [] _array;
}


int Array::min() {
    int indexMinValue = 0;

    for (int index = 1; index < _size; index++) {
        if (_array[index] < _array[indexMinValue]) { indexMinValue = index; }
    }

    return _array[indexMinValue];
}


int Array::userSum() {
    int startIndex = -1;
    int stopIndex = -1;

    for (int index = 0; index < _size; index++) {
        if ((_array[index] > 0) && startIndex == -1) { startIndex = index; }
        if (_array[index] > 0) { stopIndex = index; }
    }

    if ((startIndex + 1) > _correctSize - 1) { throw out_of_range("\nwhat()!\nStandard Error: List out of range!\n"); }

    int sum = 0;

    for (int index = startIndex + 1; index < stopIndex; index++) {
        sum += _array[index];
    }

    return sum;
}


void Array::userSort() {
    int zerosIndex = 0;

    for (int index = 0; index < _size; index++) {
        if (_array[index] == 0) {
            _array[index] = _array[zerosIndex];
            _array[zerosIndex] = 0;

            zerosIndex += 1;
        }
    }
}


void Array::print() {
    if (_size > _correctSize) { throw MyException("\n\nwhat()!\nUser Error: Stop Iteration! In print() function\n"); }

    for (int index = 0; index < _size; index++) {
        cout << _array[index] << "  ";
    }
}

