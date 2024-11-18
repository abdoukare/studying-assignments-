#include <iostream>
using namespace std;
 
int choice;

int main() {
    cout<<"which color is the traffic light? \n";
    cout<< "1. red \n";
    cout<< "2. green \n";
    cout<< "3. yellow \n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout<<"Stop nigga stoooooop\n";
        break;
    case 2:
        cout<<"you are free to go ";
    break;
    case 3:
        cout<<"just be carfule ";
    break;
    default:
        cout<<"9awd";
        break;
    }
    cout<<choice;
    return 0;
}