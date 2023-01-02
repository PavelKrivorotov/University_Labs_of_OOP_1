#include <iostream>

using namespace std;

#include "array.h"

int main() {
    Array *array1 = new Array();
    Array *array2 = new Array();
    Array *array3 = new Array();

    cout << "\t\t\t\t\tPrint array1:\n" << endl;
    array1->print();

    cout << "\n\n\n\t\t\t\t\tPrint array2:\n" << endl;
    array2->print();

    cout << "\n\n\n\t\t\t\t\tPrint array3:\n" << endl;
    array3->print();

    cout << "\n\n" << endl;

    cout << "\n\n\n\t\t\t\t\tDived array3 by 2:\n" << endl;
    array3->userDived();
    array3->print();

    cout << "\n\n\n\t\t\t\t\tReverse array2:\n" << endl;
    array2->userReverse();
    array2->print();

    cout << "\n\n\n\t\t\t\t\tReplace array1:\n" << endl;
    array1->userReplace();
    array1->print();


    delete array1;
    delete array2;
    delete array3;

    return 0;
}
