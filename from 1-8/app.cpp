#include <iostream>
using namespace std;

int main()
{
    int asciiValue;
    char character;
    int choice;
    cout<<"Choose a convertion type :\n";
    cout<<"1.ASCII value to character :\n";
    cout<<"2.character value to ASCII value :\n";
    cin>> choice;

    switch (choice)
    {
    case 1:
    cout<<"Enter an ASCII value (0 - 127):\n"; 
    cin>>asciiValue;
     if (asciiValue >= 0 && asciiValue <= 127){
     cout<<"The character for asciivalue  "<<asciiValue<<" is "<<char(asciiValue)<<"\n";
    }else{
        cout<<"Invalid value \n";
    }
        break;
    case 2:
    cout<<"Enter a character\n";
    cin>>character;
    cout<<"The asciivalue for the character  "<<character<<"is "<<int(asciiValue)<<"\n";
    break;
    
    default:
    cout << "Invalid choice. Please choose 1 or 2.\n";
        break;
    }
    return 0;
}