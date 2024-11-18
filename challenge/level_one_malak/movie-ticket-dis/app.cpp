#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string studentID;
    string validIDs[] = {"STU123", "STU456", "STU789"}; // Array of valid IDs
    bool isValid = false;

    // Ask for the student's age
    cout << "Enter your age: ";
    cin >> age;

    // Ask for the student ID
    cout << "Enter your student ID: ";
    cin >> studentID;

    // checking ida ID ta3 tlab hada kayn mno 
    for (int i = 0; i < 3; i++)
    {
        if (studentID == validIDs[i])
        {
            isValid = true;
            break;
        }
        
    }
    if (isValid){
        cout<<"Bs7tk discount";
    }else{
        cout<<"9awed ";
    }
    return 0;


}