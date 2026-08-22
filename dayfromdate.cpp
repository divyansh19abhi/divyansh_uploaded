#include <iostream>
using namespace std;
int main()
{
    int day, month, year;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    if (month == 1 || month == 2)
    {
        month += 12;
        year--;
    }
    int h = (day + (13 * (month + 1)) / 5
             + year + year / 4 - year / 100
             + year / 400) % 7;
    switch (h)
    {
        case 0:
            cout << "Saturday";
            break;
        case 1:
            cout << "Sunday";
            break;
        case 2:
            cout << "Monday";
            break;
        case 3:
            cout << "Tuesday";
            break;
        case 4:
            cout << "Wednesday";
            break;
        case 5:
            cout << "Thursday";
            break;
        case 6:
            cout << "Friday";
            break;
        case 7:
            cout<< "saturday";
            break;
        default:cout<<"invalid date";
            break;        
    }
    return 0;
}