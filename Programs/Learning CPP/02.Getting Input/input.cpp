#include <iostream>

using namespace std;

int main()
{

    string name;
    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout << "Hello " << name << endl;
    

    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "You entered: " << a << endl;

    return 0;
}