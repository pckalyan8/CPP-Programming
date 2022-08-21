#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int getNumber(){
    return 10;
};

int getNumber(int number){
    return number;
};

void lineBreak(){
    cout << "------------------------------" << endl;
};

int main(){

    lineBreak();

    // function pointer
    cout << "Function pointer without parameters" << endl;
    int (*p)();
    p = getNumber;
    cout << p() << endl;

    lineBreak();

    // function pointer with parameter
    cout << "Function pointer with parameter" << endl;
    int (*p2)(int);
    p2 = getNumber;
    cout << p2(20) << endl;

    lineBreak();

    return 0;
};