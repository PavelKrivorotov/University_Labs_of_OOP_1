#include <iostream>
using namespace std;

#include "array.h"
#include "myexception.h"

int main() {
    int *array1 = new int[12];
    int *array2 = new int[13];

    Array *myArray1 = new Array(array1, 12);
    Array *myArray2 = new Array(array2, 13);

    cout << "\t\t\tPrint new myArray1:\n" << endl;
    try {
        myArray1->print();
    }
    catch(MyException &exc) {
        cout << exc.what() << endl;
    }


    cout << "\t\t\tPrint new myArray2:\n" << endl;
    try {
        myArray2->print();
    }

    catch(MyException &exc) {
        cout << exc.what() << endl;
    }

    cout << "\n\n\t\t\tPrint Minimal value in myArray1:\n" << endl;
    cout << myArray1->min() << endl;

    cout << "\n\n\t\t\tPrint Minimal value in myArray2:\n" << endl;
    cout << myArray2->min() << endl;

    cout << "\n\n\t\t\tPrint user Sum in myArray1:\n" << endl;
    try {
        cout << myArray1->userSum() << endl;
    }
    catch(std::out_of_range &exc) {
        cout << exc.what() << endl;
    }

    cout << "\n\n\t\t\tPrint user Sum in myArray2:\n" << endl;
    try {
        cout << myArray2->userSum() << endl;
    }
    catch(std::out_of_range &exc) {
        cout << exc.what() << endl;
    }

    cout << "\n\n\t\t\tPrint user Sort in myArray1:\n" << endl;
    try {
        myArray1->userSort();
        myArray1->print();
    }
    catch (MyException &exc) {
        cout << exc.what() << endl;
    }

    cout << "\n\n\t\t\tPrint user Sort in myArray2:\n" << endl;
    try {
        myArray2->userSort();
        myArray2->print();
    }
    catch (std::exception &exc) {
        cout << "StandardException worked" << endl;
        cout << exc.what() << endl;
    }
    catch (MyException &exc) {
        cout << "MyException worked" << endl;
        cout << exc.what() << endl;
    }



    delete [] array1;
    delete [] array2;

    delete myArray1;

    return 0;
}
