
#include "student.h"

using namespace std;


int main() {
    Student *stud1 = new Student("Pavel", "Krivorotov", 2019);
    Student *stud2 = new Student(stud1);
    Student *stud3 = new Student();

    cout << "Demonstration three constructor:" << endl;;

    cout << "\n\t1. Student('Pavel', 'Krivorotov', 2019). Object at:  " << stud1 << endl;
    cout << "\t\tGet full name: " << stud1->getFullName() << endl;
    cout << "\t\tGet course: " << stud1->getCourse() << endl;

    cout << "\n\t2. Student(Student *). Object at:  " << stud2 << endl;
    cout << "\t\tGet full name: " << stud2->getFullName() << endl;
    cout << "\t\tGet course: " << stud2->getCourse() << endl;

    cout << "\n\t3. Student(). Object at:  " << stud3 << endl;
    cout << "\t\tGet full name: " << stud3->getFullName() << endl;
    cout << "\t\tGet course: " << stud3->getCourse() << endl;


    Student *stud4 = new Student("Ivan", "Ivanov", 2010);
    Student *stud5 = new Student("Pavel", "Krivorotov", 2021);
    Student *stud6 = new Student("Alex", "Alexandrov", 2023);

    cout << "\n\nDemonstration correct worked getFullName and getCouse functions:" << endl;

    cout << "\n\t1. Student('Ivan', 'Ivanov', 2010). Object at:  " << stud4 << endl;
    cout << "\t\tGet full name: " << stud4->getFullName() << endl;
    cout << "\t\tGet course: " << stud4->getCourse() << endl;

    cout << "\n\t2. Student('Pavel', 'Krivorotov', 2021). Object at:  " << stud5 << endl;
    cout << "\t\tGet full name: " << stud5->getFullName() << endl;
    cout << "\t\tGet course: " << stud5->getCourse() << endl;

    cout << "\n\t3. Student('Alex', 'Alexandrov', 2023). Object at:  " << stud6 << endl;
    cout << "\t\tGet full name: " << stud6->getFullName() << endl;
    cout << "\t\tGet course: " << stud6->getCourse() << endl;


    delete stud1;
    delete stud2;
    delete stud3;
    delete stud4;
    delete stud5;
    delete stud6;

    return 0;
}
