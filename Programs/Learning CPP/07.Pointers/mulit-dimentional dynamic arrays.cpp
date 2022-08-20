#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // multi dimensional dynamic array
    int rows, cols;
    cout << "Enter rows: "  << endl;
    cin >> rows;
    cols = rows;

    int **table = new int *[rows];
    for (int i = 0; i < cols; i++)
    {
        table[i] = new int[cols];
    }

    // assign value to first row and first column
    table[0][0] = 1000;
    cout << "Value of first row and first column: " << table[0][0] << endl;

    // display the table
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] table[i];
        table[i] = NULL;
    }

    delete[] table;
    table = NULL;

    return 0;
}