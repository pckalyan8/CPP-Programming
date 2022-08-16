#include <iostream>

using namespace std;

void getMinAndMax(int numbers[], int size, int *min, int *max)
{
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < *min)
            *min = numbers[i];
        if (numbers[i] > *max)
            *max = numbers[i];
    }
}

int main()
{   
    // getting min and max from array using one function
    // using pointers

    int numbers[10] = {1, -12, 35, 4, 25, 6, 77, 8, 19, -10};

    int min, max;
    min = max = numbers[0];
    getMinAndMax(numbers, 10, &min, &max);
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}