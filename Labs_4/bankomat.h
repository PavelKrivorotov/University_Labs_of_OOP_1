#ifndef BANKOMAT_H
#define BANKOMAT_H

#include <iostream>
#include "money.h"

struct countNominalsMoney {
    int countCoins10 = 0;
    int countCoins50 = 0;
    int countCoins100 = 0;
    int countCoins500 = 0;
    int countCoins1000 = 0;
    int countCoins5000 = 0;
};


class Bankomat: public Money {

public:
    Bankomat();
    Bankomat(int countCoins10, int countCoins50, int countCoins100, int countCoins500,
             int countCoins1000, int countCoins5000);
    ~Bankomat();

    std::string putMoney(int money);

    std::string takeMoney(int money);
};

#endif // BANKOMAT_H
