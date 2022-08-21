#include <iostream>
#include <memory>
using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout << "MyClass constructor" << endl;
    }

    ~MyClass()
    {
        cout << "MyClass destructor" << endl;
    }
};

int main()
{   
    cout << "-----------------------------------------------------" << endl;
    {
        // smart pointers
        // unique_ptr<int> p1(new int(10));

        // create a unique pointer to an int
        unique_ptr<int> unPtr1 = make_unique<int>(10);
        // cout << "unPtr1: " << unPtr1 << endl;
        cout << "Value of unPtr1: " << *unPtr1 << endl;

        unique_ptr<int> unPtr2 = move(unPtr1);
        // cout << "unPtr2: " << unPtr2 << endl;
        cout << "Value of unPtr2: " << *unPtr2 << endl;

        // unique pointer for my class
        unique_ptr<MyClass> unPtr3 = make_unique<MyClass>();

        {
            cout << "Inside the scope" << endl;
            unique_ptr<MyClass> unPtr4 = make_unique<MyClass>();
            cout << "scope over" << endl;
        }
    }

    cout << "Outside the scope" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Shared Pointers" << endl;
    {
        // shared pointer
        shared_ptr<MyClass> shPtr1 = make_shared<MyClass>();
        cout << "shared count: " << shPtr1.use_count() << endl;
        shared_ptr<MyClass> shPtr2 = shPtr1;
        cout << "shared count: " << shPtr1.use_count() << endl;
        {
            shared_ptr<MyClass> shPtr3 = shPtr2;
            cout << "shared count: " << shPtr1.use_count() << endl;
        }
        cout << "shared count: " << shPtr1.use_count() << endl;
    }

    cout << "-----------------------------------------------------" << endl;
    cout << "Weak Pointers" << endl;
    // weak pointer
    // use debugger to see the effect of weak pointers
    weak_ptr<int> wPtr1;
    {
        shared_ptr<int> shPtr1 = make_shared<int>(10);
        wPtr1 = shPtr1;
    }
    cout << "-----------------------------------------------------" << endl;
};