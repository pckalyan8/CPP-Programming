#include <iostream>

using namespace std;

string getDayOfTheWeek(int dayNum)
{
    string day;

    // switch statement
    switch (dayNum)
    {
    case 0:
        day = "Sunday";
        break;
    case 1:
        day = "Monday";
        break;
    case 2:
        day = "Tuesday";
        break;
    case 3:
        day = "Wednesday";
        break;
    case 4:
        day = "Thursday";
        break;
    case 5:
        day = "Friday";
        break;
    case 6:
        day = "Saturday";
        break;
    default:
        day = "Invalid Day Nuber";
    }
    return day;
}

int main()
{
    // get dayNum from user
    int dayNum;
    cout << "Enter day number: ";
    cin >> dayNum;

    // get day of the week
    string day = getDayOfTheWeek(dayNum);
    cout << "Day of the week: " << day << endl;
    return 0;
}