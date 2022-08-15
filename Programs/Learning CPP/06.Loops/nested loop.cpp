#include <iostream>

using namespace std;
/*
    Main function
*/
int main()
{

    // number grid
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << i << " " << j << endl;
        }
    }

    // nested loop from matrix
    cout << "Display matrix" << endl;
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (auto & row : matrix)
    {
        for (int col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}