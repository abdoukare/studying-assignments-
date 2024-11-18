#include <iostream>
using namespace std;

int year;

int main()
{
    cout << "Please enter a valid year: ";
    cin >> year;

    switch (year) {
    case 1982:
        cout << "My birth day" << endl;
        break;
    case 1989:
        cout << "My first work" << endl;
        break;
    case 1995:
        cout << "Windows 95" << endl;
        break;
    default:
        cout << "No event in this year" << endl;
        break;
    }
    
        int day;
    cin >> day;

    switch (day)
    {
    case 1:
    case 2:
    case 3:
        cout<<"Shop is Open";
        break;
    case 4:
        cout << "4 Shop Is Closed";
        break;
    case 5:
        cout << "5 Shop Is Closed";
        break;
    default:
        cout << "Day Is Not Valid";
    }

    int num;
    cin>> num;
    switch (num)
    {
    case 10:
    cout<<"Case 1";
        break;
    case 20:
    cout<<"Case 2";
    break;
    case 29:
    case 30:
    case 31:
    case 32:
    cout<<"case 3";
    break;

    
    default:
    cout<<"invalid number";
        break;
    }
        
    return 0;
}
 
