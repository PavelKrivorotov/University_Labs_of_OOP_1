#include "bankomat.h"
using namespace std;


Bankomat::Bankomat(int countCoins10, int countCoins50, int countCoins100, int countCoins500,
                   int countCoins1000, int countCoins5000):
    Money(countCoins10, countCoins50, countCoins100, countCoins500, countCoins1000,
          countCoins5000) {

}


Bankomat::Bankomat(): Money() {

}


Bankomat::~Bankomat() {

}


std::string Bankomat::putMoney(int money) {
    int tmpMoney = money;

    if (tmpMoney < 10) { return "Youre sum of money less than 10 coins!"; }
    if (tmpMoney % 10) { return "Youre sum of money not a multiple of 10"; }

    while (tmpMoney) {
        if (tmpMoney >= 5000) { tmpMoney -= 5000; setCountCoins5000(1); continue; }
        if (tmpMoney >= 1000) { tmpMoney -= 1000; setCountCoins1000(1); continue; }
        if (tmpMoney >= 500) { tmpMoney -= 500; setCountCoins500(1); continue; }
        if (tmpMoney >= 100) { tmpMoney -= 100; setCountCoins100(1); continue; }
        if (tmpMoney >= 50) { tmpMoney -= 50; setCountCoins50(1); continue; }
        if (tmpMoney >= 10) { tmpMoney -= 10; setCountCoins10(1); continue; }
  }

    return "Accepted of " + to_string(money) + " coins";
}


std::string Bankomat::takeMoney(int money) {
    int tmpMoney = money;

    if (tmpMoney < 10) { return "Youre sum of money less than 10 coins!"; }
    if (tmpMoney % 10) { return "Youre sum of money not a multiple of 10"; }
    if (tmpMoney > getSumCoins()) { "The Bankomat noo such amount " + to_string(money); }

    countNominalsMoney user;
    countNominalsMoney bankomat;
    bankomat.countCoins10 = getCountCoins10();
    bankomat.countCoins50 = getCountCoins50();
    bankomat.countCoins100 = getCountCoins100();
    bankomat.countCoins500 = getCountCoins500();
    bankomat.countCoins1000 = getCountCoins1000();
    bankomat.countCoins5000 = getCountCoins5000();

    while (true) {
        if ((tmpMoney >= 5000) && (bankomat.countCoins5000)) {
            tmpMoney -= 5000;
            bankomat.countCoins5000 -= 1;
            user.countCoins5000 += 1;
        }

        else if ((tmpMoney >= 1000) && (bankomat.countCoins1000)) {
            tmpMoney -= 1000;
            bankomat.countCoins1000 -= 1;
            user.countCoins1000 += 1;
        }

        else if ((tmpMoney >= 500) && (bankomat.countCoins500)) {
            tmpMoney -= 500;
            bankomat.countCoins500 -= 1;
            user.countCoins500 += 1;
        }

        else if ((tmpMoney >= 100) && (bankomat.countCoins100)) {
            tmpMoney -= 100;
            bankomat.countCoins100 -= 1;
            user.countCoins100 += 1;
        }

        else if ((tmpMoney >= 50) && (bankomat.countCoins50)) {
            tmpMoney -= 50;
            bankomat.countCoins50 -= 1;
            user.countCoins50 += 1;
        }

        else if ((tmpMoney >= 10) && (bankomat.countCoins10)) {
            tmpMoney -= 10;
            bankomat.countCoins10 -= 1;
            user.countCoins10 += 1;
        }

        else {
            break;
        }
    }

    if (tmpMoney) { return "The Bankomat noo such nominals amount " + to_string(money); }

    setCountCoins5000(-user.countCoins5000);
    setCountCoins1000(-user.countCoins1000);
    setCountCoins500(-user.countCoins500);
    setCountCoins100(-user.countCoins100);
    setCountCoins50(-user.countCoins50);
    setCountCoins10(-user.countCoins10);

    return "Given away " + to_string(money) + " coins";
}

