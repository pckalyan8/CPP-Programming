#include <iostream>

using namespace std;

void demoFunction(int a, int b);

void sayHello(string name)
{
    cout << "Hello " << name << endl;
}

int main()
{   
    // main function called
    cout << "Main Started" << endl;

    // call the function
    sayHello("John");

    // demoFunction(1, 2);
    demoFunction(1, 2);

    // main function ended
    cout << "Main Ended" << endl;
    
    return 0;
}

void demoFunction(int a, int b)
{
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}