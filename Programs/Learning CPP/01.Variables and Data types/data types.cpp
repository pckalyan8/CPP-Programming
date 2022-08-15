#include <iostream>

using namespace std;

int main(){
    // char is a single character
    char gender = 'M';
    int age = 30;
    string name = "Kai";
    float height = 1.8;
    
    
    // double is the default data type
    // double has more precision than float
    double weight = 80.0; 

    bool isMarried = true;
    cout << "Hey" << name << " you are " << age << " years old" << endl;
    cout << "Gender :" << gender << endl;
    cout << "You are " << height << " meters tall" << endl;
    cout << "You are " << weight << " kilograms heavy" << endl;

    if(isMarried){
        cout << "You are married" << endl;
    } else {
        cout << "You are not married" << endl;
    }
    
    return 0;
}