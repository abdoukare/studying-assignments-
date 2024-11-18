#include <iostream>
using namespace std;
// making an ATM 

int amount;
int main(){
    cout<<"Please enter your amount : ";
    cin >> amount;
    if (amount > 0 && amount <= 500)
    {
        cout<<"Ya telab, we cannot withdrawal under 500DA";
    }else{
        cout<<"spend your money wisely nigga ";
    }
    return 0;
}