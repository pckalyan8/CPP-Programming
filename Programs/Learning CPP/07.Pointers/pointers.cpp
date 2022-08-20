#include <iostream>

using namespace std;

int main()
{
    int age = 10;
    // & gives the address of the variable
    // * is used to store the address of the variable
    int *pAge = &age;
    
    cout << "age = " << age << endl;
    cout << "pAge = " << pAge << endl;

    // using * on the pointer gives the value of the variable
    // also known as dereferrencing
    cout << "*pAge = " << *pAge << endl;

    // modifing the value of the variable using the pointer
    *pAge = 20;
    cout << "age = " << age << endl;
    
    // address of the variable
    cout << "&age = " << &age << endl;

    // value of the address of the variable
    cout << "&*pAge = " << &*pAge << endl;

    // address of the pointer
    cout << "&pAge = " << &pAge << endl;
    return 0;
}