#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // multi dimensional dynamic array
    int rows, cols;
    cout << "Enter rows and cols: ";
    cin >> rows >> cols;

    int **table = new int *[rows];
    for (int i = 0; i < cols; i++)
    {
        table[i] = new int[cols];
    }

    // assign value to first row and first column
    table[0][0] = 1000;

    for (int i = 0; i < rows; i++)
    {
        delete[] table[i];
        table[i] = NULL;
    }

    delete[] table;
    table = NULL;

    return 0;
}