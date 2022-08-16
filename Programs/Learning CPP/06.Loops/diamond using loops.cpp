#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    // diamond using loops
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Enter symbol
    char symbol;
    cout << "Enter a symbol: ";
    cin >> symbol;

    // Print diamond using loops
    /*
    ' ' ' * ' ' '     
    ' ' * * * ' '   
    ' * * * * * ' 
    * * * * * * * 
    ' * * * * * ' 
    ' ' * * * ' ' 
    ' ' ' * ' ' ' 
   
    */

   // top half
    for (int i = 1; i <= n; i++)
    {
        for (int s = 0; s < n-i; s++)
        {
            cout << "o" << " ";
        }
        
        for (int j = 0; j < (2*i - 1); j++)
        {   
            cout << symbol << " ";
        }

        for (int s = 0; s < n-i; s++)
        {
            cout << "o" << " ";
        }
        cout << endl;
    }


    // bottom half
    for (int i = n - 1; i >= 1; i--)
    {
        for (int s = 0; s < n-i; s++)
        {
            cout << "o" << " ";
        }

        for (int j = 0; j < (2*i - 1); j++)
        {   
            cout << symbol << " ";
        }

        for (int s = 0; s < n-i; s++)
        {
            cout << "o" << " ";
        }
        cout << endl;
    }
    
    return 0;
}