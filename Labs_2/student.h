#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>


class Student {

public:
    Student(std::string name, std::string surname, int year);
    Student(Student *student);
    Student();
    virtual ~Student();

    std::string getName();

    std::string getSurname();

    std::string getFullName();

    int getYear();

    int getCourse();

private:
    std::string _name;
    std::string _surname;
    int _year;
};

#endif // STUDENT_H
