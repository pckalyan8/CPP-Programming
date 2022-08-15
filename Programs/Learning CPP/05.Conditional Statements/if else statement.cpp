#include <iostream>

using namespace std;

int main()
{
    // if else statement
    int a = 10;
    int b = 20;
    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else
    {
        cout << "b is greater than a" << endl;
    }

    // if else if else statement
    int c = 30;
    int d = 40;
    if (c > d)
    {
        cout << "c is greater than d" << endl;
    }
    else if (d > c)
    {
        cout << "d is greater than c" << endl;
    }
    else
    {
        cout << "c and d are equal" << endl;
    }

    // multiple conditions with and operator and or operator
    int e = 50;
    int f = 60;
    if (e > f && f > e)
    {
        cout << "e is greater than f" << endl;
    }
    else if (e > f || f > e)
    {
        cout << "e is greater than f" << endl;
    }
    else
    {
        cout << "e and f are equal" << endl;
    }

    // if else statement with nested if else statement
    int g = 70;
    int h = 80;
    if (g > h)
    {
        cout << "g is greater than h" << endl;
    }
    else
    {
        if (h > g)
        {
            cout << "h is greater than g" << endl;
        }
        else
        {
            cout << "g and h are equal" << endl;
        }
    }

    // if else with not operator
    int i = 90;
    int j = 100;
    if (!(i > j))
    {
        cout << "i is less than j" << endl;
    }
    else
    {
        cout << "i is greater than j" << endl;
    }

}