#include <iostream>

using std::cout;
using std::endl;

void lineBreak()
{
    cout << " -------------------------- " << endl;
}

int main(){

    int numbers[10] = {1, -12, 35, 4, 25, 6, 77, 8, 19, -10};

    // all these references are pointing to the same memory location
    // that is the first element of the array
    cout << numbers << " has " << *numbers <<  endl;
    cout << &numbers << " has " << **&numbers <<  endl;
    cout << &numbers[0] << " has " << *&numbers[0] <<  endl;
    lineBreak();

    // now pointing to the second element of the array
    cout << &numbers[1] << " has " << *&numbers[1] << endl;
    cout << (numbers + 1) << " has " << *(numbers + 1) << endl;
    lineBreak();

    // for loop to print all the elements of the array
    for (int i = 0; i < 10; i++)
    {
        cout << &numbers[i] << " has " << *&numbers[i] << endl;
    }
    lineBreak();


    // for loop with pointers to print all the elements of the array
    for (int *i = numbers; i < numbers + 10; i++)
    {
        cout << i << " has " << *i << endl;
    }
    lineBreak();

    // for loop with pointers to print all the elements of the array
    for(int i = 0; i < 10; i++)
    {
        cout << *(numbers + i) << " ";
    }
    cout << endl;
    lineBreak();

    // be carful while indexing with pointers
    // if index is out of bound then it will access memory location that is out of array
    cout << "This is not from our array " <<*(numbers + 11) << endl;

    return 0;
}