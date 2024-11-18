#include <iostream>
using namespace std;

int main(){
    /*
    30
    27
    24
    21
    18
    15
    12
    9
    6
    3
    */
    int X = 30;
    for (int i = 30; i >= 3; i-=3)
    {
        cout<<i<<endl;
    }

    // without even numbers 
    /*
    27
    21
    15
    9
    3
    */
   for (int i = 30; i >= 3; i-=3)
   {
    if (i % 2 != 0)
    {
        cout<<i<<endl;
    }
    
   }
   
    return 0;
}