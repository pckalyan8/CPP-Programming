#include <iostream>

using namespace std;

int main(){

    // String methods
    // string is a sequence of characters
    string name = "Kai";
    // length of a string is the number of characters in the string
    cout << "Your name is " << name.length() << " characters long" << endl;
    // indexing starts at 0
    cout << "The first character of your name is " << name[0] << endl;
    cout << "The last character of your name is " << name[name.length() - 1] << endl;
    // string can be updated
    name[0] = 'M';
    cout << "Your name is now " << name << endl;
    // string can be concatenated
    name = name + " " + "Kai";
    cout << "Your name is now " << name << endl;
    // string has find and replace methods
    cout << "Your name Kai starts at index " << name.find("Kai", 0) << endl;
    // string substring method
    cout << "Your name from index 0 to 3 is " << name.substr(0, 3) << endl;
    
    // Max for char
    cout << "The max of A and B is : " << max('A', 'B') << endl;

    return 0;
}