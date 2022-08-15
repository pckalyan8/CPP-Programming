#include <iostream>

using namespace std;

int power(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int base = 2;
    int exponent = 3;
    int result = power(base, exponent);
    cout << result << endl;
    return 0;
}