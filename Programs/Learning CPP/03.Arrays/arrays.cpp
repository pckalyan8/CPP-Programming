#include <iostream>

using namespace std;

int main()
{

    // array declaration
    int numbers[] = {122, 32, 13, 40, 25};

    cout << "The first element of the array is: " << numbers[0] << endl;

    numbers[0] = 100;

    cout << "The first element of the array is: " << numbers[0] << endl;
    
    // size of the array
    cout << "The size of the array is: " << sizeof(numbers) << endl;

    numbers[24] = 128;

    cout << "Element at index 24: " << numbers[24] << endl;

    double newNumbers[100] = {1.2, 2.3, 3.4, 4.5, 5.6};

    // size of the array
    cout << "The size of the array is: " << sizeof(newNumbers) << endl;

    return 0;
}