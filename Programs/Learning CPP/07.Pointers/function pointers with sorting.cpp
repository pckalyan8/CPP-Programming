#include <iostream>
#include <vector>

using namespace std;

bool ascending(int a, int b)
{
    return a < b;
}

bool descending(int a, int b)
{
    return a > b;
}

void sort(vector<int> &v, bool (*compare)(int, int))
{
    for (size_t i = 0; i < v.size(); i++)
    {
        for (size_t j = i + 1; j < v.size(); j++)
        {
            if (compare(v[i], v[j]))
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}

void print(vector<int> &v)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{

    // sort using function pointer
    vector<int> v = {12, 32, 2, 9, -4, 22, 62, -43, -1, 0};
    cout << "Before sorting: " << endl;
    print(v);

    sort(v, ascending);
    cout << "After sorting using ascending: " << endl;
    print(v);
    cout << endl;

    sort(v, descending);
    cout << "After sorting using descending: " << endl;
    print(v);
    cout << endl;
}