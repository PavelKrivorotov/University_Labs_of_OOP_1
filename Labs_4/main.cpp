#include <iostream>
using namespace std;

#include "bankomat.h"

int main() {
    Bankomat *bankomat_1 = new Bankomat();
    Bankomat *bankomat_2 = new Bankomat(19, 7, 12, 8, 5, 2);
    Bankomat *bankomat_3 = new Bankomat(0, 0, 0, 0, 0, 2);

    cout << "Initial values of coints:" << endl;
    cout << "\tbankomat_1 have a " << bankomat_1->getSumCoins() << " coins." << endl;
    cout << "\tbankomat_2 have a " << bankomat_2->getSumCoins() << " coins." << endl;
    cout << "\tbankomat_3 have a " << bankomat_3->getSumCoins() << " coins." << endl;

    cout << "\nNow we can put of money in all Bankomat`s:" << endl;
    cout << "\tPut 1990 coins: " << bankomat_1->putMoney(1990) << endl;
    cout << "\tPut -7000 coins: "  << bankomat_2->putMoney(-7000) << endl;
    cout << "\tPut 10 coins: "  << bankomat_3->putMoney(10) << endl;

    cout << "\nNow values of coints:" << endl;
    cout << "\tbankomat_1 have a " << bankomat_1->getSumCoins() << " coins." << endl;
    cout << "\tbankomat_2 have a " << bankomat_2->getSumCoins() << " coins." << endl;
    cout << "\tbankomat_3 have a " << bankomat_3->getSumCoins() << " coins." << endl;

    cout << "\nNow we can take of money in all Bankomat`s:" << endl;
    cout << "\tTake 20000 coins: " << bankomat_1->takeMoney(20000) << endl;
    cout << "\tTake 20000 coins: "  << bankomat_2->takeMoney(20000) << endl;
    cout << "\tTake 6000 coins: "  << bankomat_3->takeMoney(6000) << endl;

    cout << "\nNow values of coints:" << endl;
    cout << "\tbankomat_1 have a " << bankomat_1->getSumCoins() << " coins." << endl;
    cout << "\tbankomat_2 have a " << bankomat_2->getSumCoins() << " coins." << endl;
    cout << "\tbankomat_3 have a " << bankomat_3->getSumCoins() << " coins." << endl;

    cout << "\nNow we can take of money in all bankomat_3:" << endl;
    cout << "\tTake 5010 coins: "  << bankomat_3->takeMoney(5010) << endl;

    cout << "\nNow values of coints:" << endl;
    cout << "\tbankomat_3 have a " << bankomat_3->getSumCoins() << " coins." << endl;

    delete bankomat_1;
    delete bankomat_2;
    delete bankomat_3;

    return 0;
}

