#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H

#include "iostream"


class MyException: public std::exception {

public:
    MyException(std::string msg);
    ~MyException();

    char const *what() const  throw();

private:
    std::string _msg;
};

#endif // MYEXCEPTION_H
