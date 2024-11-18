#include <iostream>
using namespace std;

int main() {
    int dogAge, humanAge;

    cout << "Enter your dog's age: ";
    cin >> dogAge;

    humanAge = dogAge * 7;

    cout << "Your dog's age in human years is: " << humanAge << endl;

    return 0;
}
