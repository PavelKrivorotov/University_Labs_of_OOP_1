#include "array.h"

using namespace std;

Array::Array() {
    for (int index = 0; index < 10; index++) {
        int value = (rand() % 21) - 10;
        _vector.push_back(value);
    }
}


Array::~Array() {

}


void Array::userDived() {
    auto _userDived = [] (int &value) { value = value / 2; };

    for_each(_vector.begin(), _vector.end(), _userDived);
}


void Array::userReverse() {
    int tempValue;

    tempValue = *_vector.begin();
    *_vector.begin() = *(_vector.end() - 1);
    *(_vector.end() - 1) = tempValue;

    tempValue = *(_vector.begin() + 1);
    *(_vector.begin() + 1) = *(_vector.end() - 2);
    *(_vector.end() - 2) = tempValue;
}


void Array::userReplace() {
    auto _userReplace = [] (int &value) { if (abs(value) < 10) { value = 0; } };

    for_each(_vector.begin(), _vector.end(), _userReplace);
}


void Array::print() {
    auto _print = [] (int &value) { cout << value << "  "; };

    for_each(_vector.begin(), _vector.end(), _print);
}

