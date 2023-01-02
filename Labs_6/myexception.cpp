#include "myexception.h"

using namespace std;

MyException::MyException(string msg) {
    _msg = msg;
}


MyException::~MyException() {

}


char const * MyException::what() const throw() {
    return _msg.c_str();
}
