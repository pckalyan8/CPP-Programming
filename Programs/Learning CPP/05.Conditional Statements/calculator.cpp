#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;

    char op;
    cout << "Enter operator: ";
    cin >> op;

    cout << "Enter b: ";
    cin >> b;

    int result;
    if(op == '+'){
        result = a + b;
    }else if (op == '-'){
        result = a - b;
    }else if (op == '*'){
        result = a * b;
    }else if (op == '/'){
        result = a / b;
    }else{
        cout << "Invalid Entry";
    }
    
    cout << "Result: " << result << endl;
    return 0;
}