#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // this give error because the size of the array is not known at compile time
    // int myArray[size];

    // this is correct because the size of the array is known at compile time
    // new keyword is used to allocate memory for the array
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of the array[" << i << "]: ";
        cin >> arr[i];
    }

    // printing the array
    for (int i = 0; i < size; i++)
    {
        // cout << "arr[" << i << "] = " << arr[i] << endl;
        cout << "arr[" << i << "] = " << *(arr + i) << endl;
    }
    
    // deallocating the memory
    delete []arr;
    arr = NULL;

    return 0;
}