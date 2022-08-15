#include <iostream>

using namespace std;

int main(){

    // for loop
    cout << "for loop" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    // for loop with break and continue
    cout << "for loop with break and continue" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
        if (i == 7)
        {
            break;
        }
        if (i == 5)
        {
            continue;
        }
    }

    // for in loop
    cout << "for in loop" << endl;
    int arr[] = {1, 2, 3, 4, 5};
    for (int i : arr)
    {
        cout << i << endl;
    }

    // for loop in a range
    cout << "for loop in a range" << endl;
    for (int i = 0; i < 10; i += 2)
    {
        cout << i << endl;
    }

    return 0;
}