#include <iostream>

using namespace std;

int main()
{
    int age = 10;
    int *pAge = &age;
    cout << "age = " << age << endl;
    cout << "*pAge = " << *pAge << endl;
    cout << "pAge = " << pAge << endl;
    cout << "&age = " << &age << endl;
    cout << "&*pAge = " << &*pAge << endl;
    cout << "&pAge = " << &pAge << endl;
    return 0;
}