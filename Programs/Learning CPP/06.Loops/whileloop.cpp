#include <iostream>

using namespace std;

int main(){

    // while loop
    int i = 0;
    while (i < 10)
    {
        cout << i << endl;
        i++;
    }

    // do while loop
    i = 0;
    do
    {
        cout << i << endl;
        i++;
    } while (i < 10);

    // while loop with break
    i = 0;
    while (i < 10)
    {
        cout << i << endl;
        if (i == 5)
        {
            break;
        }
        i++;
    }

    // while loop with continue
    i = 0;
    while (i < 10)
    {
        cout << i << endl;
        if (i == 5)
        {
            continue;
        }
        i++;
    }

    // while loop with break and continue
    i = 0;
    while (i < 10)
    {
        cout << i << endl;
        if (i == 5)
        {
            break;
        }
        if (i == 7)
        {
            continue;
        }
        i++;
    }

    return 0;
}