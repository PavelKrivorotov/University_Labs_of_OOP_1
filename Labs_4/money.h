#ifndef MONEY_H
#define MONEY_H


class Money {

public:
    Money();
    Money(int countCoins10, int countCoins50, int countCoins100, int countCoins500,
          int countCoins1000, int countCoins5000);
    virtual ~Money();

    int getSumCoins();

protected:
    int getCountCoins10();

    int getCountCoins50();

    int getCountCoins100();

    int getCountCoins500();

    int getCountCoins1000();

    int getCountCoins5000();

    void setCountCoins10(int deltaCount);

    void setCountCoins50(int deltaCount);

    void setCountCoins100(int deltaCount);

    void setCountCoins500(int deltaCount);

    void setCountCoins1000(int deltaCount);

    void setCountCoins5000(int deltaCount);

private:
    int _countCoins10;
    int _countCoins50;
    int _countCoins100;
    int _countCoins500;
    int _countCoins1000;
    int _countCoins5000;
};

#endif // MONEY_H
