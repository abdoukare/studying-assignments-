#include <iostream>
using namespace std;

int main(){
    int N;
    int i;
    int factorial;
    cout<<"enter a natural N : ";
    cin >> N;
    factorial = 1 ;
    for ( i = 1; i <= N; i++)
    {
        factorial = factorial  * i;
    }
    cout<< factorial;
    
    return 0; 
}