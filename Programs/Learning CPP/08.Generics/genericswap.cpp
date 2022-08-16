#include <iostream>

using std::cout;
using std::endl;
using std::cin;

// Generic swap function
// can either have typename or class as template parameter
// template <class T>
template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    a = 12;
    b = 13;
    cout << "Before swapping: " << a << " " << b << endl;
    swap(a, b);
    cout << "After swapping: " << a << " " << b << endl;
}