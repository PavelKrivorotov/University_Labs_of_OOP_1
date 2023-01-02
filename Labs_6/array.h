#ifndef ARRAY_H
#define ARRAY_H


class Array {

public:
    Array(int *arr, int size);
    virtual ~Array();

    int min();

    int userSum();

    void userSort();

    void print();

private:
    int *_array;
    int _size;

    int _correctSize;
};

#endif // ARRAY_H
