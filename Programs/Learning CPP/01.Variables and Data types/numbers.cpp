#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // int is a whole number
    int age = 30;
    cout << "You are " << age << " years old" << endl;

    // float is a decimal number
    float height = 1.8;
    cout << "You are " << height << " meters tall" << endl;
    
    // double is the default data type
    // double has more precision than float
    double weight = 80.0; 
    cout << "You are " << weight << " kilograms heavy" << endl;

    int a = 20;
    int b = 10;
    double c = 30.4;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    // addition
    cout << "a + b: " << a + b << endl;
    // subtraction
    cout << "a - b: " << a - b << endl;
    // multiplication
    cout << "a * b: " << a * b << endl;
    // division
    cout << "a / b: " << a / b << endl;
    // modulus
    cout << "a % b: " << a % b << endl;
    // increment
    cout << "a++: " << a++ << endl;
    cout << "a: " << a << endl;

    // power
    cout << "a^2: " << a*a << endl;

    // pow method
    cout << "a^2: " << pow(a, 2) << endl;
    
    // square root
    cout << "sqrt(a): " << sqrt(a) << endl;

    // absolute value
    cout << "abs(c): " << abs(c) << endl;

    // round up
    cout << "ceil(c): " << ceil(c) << endl;

    // round down
    cout << "floor(c): " << floor(c) << endl;

    // round to nearest integer
    cout << "round(c): " << round(c) << endl;

    // max value
    cout << "fmax(a, b): " << fmax(a, b) << endl;

    // min value
    cout << "fmin(a, b): " << fmin(a, b) << endl;

    return 0;
}