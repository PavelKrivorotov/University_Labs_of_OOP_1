#include "student.h"

#include <ctime>
using namespace std;


Student::Student(string name, string surname, int year) {
    _name = name;
    _surname = surname;
    _year = year;
}


Student::Student(Student *student) {
    _name = student->getName();
    _surname = student->getSurname();
    _year = student->getYear();
}


Student::Student() {
    _name = "";
    _surname = "";
    _year = 0;
}


Student::~Student() {

}


string Student::getName() {
    return _name;
}


string Student::getSurname() {
    return _surname;
}


string Student::getFullName() {
    return _name + " " + _surname;
}


int Student::getYear() {
   return _year;
}


int Student::getCourse() {
    time_t t = time(nullptr);
    tm *const info = localtime(&t);

    int yearNow = 1900 + info->tm_year;
    int course = yearNow - _year + 1;

    if (!_year) { return -1; }
    if (course <= 0) { return -1; }
    if (course > 5) { return 5; }
    return course;
}

