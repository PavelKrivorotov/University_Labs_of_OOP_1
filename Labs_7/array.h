#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <algorithm>
#include <vector>


class Array {

public:
    Array();
    virtual ~Array();

    void userDived();

    void userReverse();

    void userReplace();

    void print();

private:
    std::vector<int> _vector;
};

#endif // ARRAY_H
