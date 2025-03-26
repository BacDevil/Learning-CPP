#include <iostream>

using namespace std;

void printDayOfWeek(int day)
{
    switch (day)
    {

    // case 1
    case 1:
        cout << "Today is Sunday" << endl;
        break;

    // case 2
    case 2:
        cout << "Today is Monday" << endl;
        break;

    // case 3
    case 3:
        cout << "Today is Tuesday" << endl;
        break;

    // case 4
    case 4:
        cout << "Today is Wednesday" << endl;
        break;

    // case 5
    case 5:
        cout << "Today is Thursday" << endl;
        break;

    // case 6
    case 6:
        cout << "Today is Friday" << endl;
        break;

    // case 7
    case 7:
        cout << "Today is Saturday" << endl;
        break;

    // default value
    default:
        cout << "Invalid Day" << endl;
        break;
    }
}


int main() {
    int day;
    cout << "Enter a day number (1 to 7): ";
    cin >> day;
    printDayOfWeek(day);
    return 0;
    
}