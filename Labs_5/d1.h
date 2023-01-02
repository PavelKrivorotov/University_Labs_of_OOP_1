#ifndef D1_H
#define D1_H

#include "b1.h"
#include "b2.h"


class D1: public B1, private B2 {

public:
    D1(int d1, int b1, int b2);
    ~D1();

    void showD1();

private:
    int _d1;
};

#endif // D1_H
