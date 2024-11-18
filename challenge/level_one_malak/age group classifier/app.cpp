#include <iostream>
using namespace std;

int age;
int main(){
    cout<<"Enter your age : ";
    cin >> age;
    if (age <= 12)
    {
        cout<<"You are a child ";
    }else if (age >= 13 && age <= 19)
    {
        cout<<"you are a teenager ";
    }else if (age >= 20)
    {
        cout<<"you are an adult";
    }else{
        cout<<"i donno what to say";
    }
    return 0;
    
    
    
}