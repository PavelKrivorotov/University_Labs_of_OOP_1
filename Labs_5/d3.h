#ifndef D3_H
#define D3_H

#include "d2.h"
#include "b3.h"


class D3: public D2, private B3 {

public:
    D3(int d3, int d2, int d1, int b1, int b2, int b3);
    ~D3();

    void showD3();

private:
    int _d3;
};

#endif // D3_H
