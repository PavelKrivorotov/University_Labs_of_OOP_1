#ifndef D2_H
#define D2_H

#include "d1.h"


class D2: private D1 {

public:
    D2(int d2, int d1, int b1, int b2);
    ~D2();

protected:
    void showD2();

private:
    int _d2;
};

#endif // D2_H
