#include <iostream>

using std::cout;
using std::endl;

void printNumber(int *num)
{
    cout << "num = " << *num << endl;
}

void printChar(char *ch)
{
    cout << "ch = " << *ch << endl;
}

// print using void pointer
void print(void *ptr, char type)
{   
    // be careful with the type casting
    // compiler doesnt show error if you do different type casting
    switch (type)
    {
    case 'i':
        cout << "num = " << *(int *)ptr << endl;
        break;
    case 'c':
        cout << "char = " << *(char *)ptr << endl;
        break;
    default:
        break;
    }
    
}

int main()
{
    int num = 10;
    char ch = 'a';
    printNumber(&num);
    printChar(&ch);

    // print using void pointer
    print(&num, 'i');
    print(&ch, 'c');

    return 0;
}