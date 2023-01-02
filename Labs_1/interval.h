#ifndef INTERVAL_H
#define INTERVAL_H


class Interval {

public:
    Interval(double left = 0, double right = 0);
    virtual ~Interval();

    void setLeft(double left);

    void setRight(double right);

    bool rangeCheck(double value);

private:
    double _left;
    double _right;
};

#endif // INTERVAL_H
