#include <iostream>
using namespace std;
// needed output : 123456789 
int main(){
    int i;
    // using for 
/*
    for ( i = 1; i <= 9; i++)
    {
        cout<< i;
    }

    // using while 
    while (i<= 9)
    {
        cout<<i;
        i = i+1;
    }
*/
    // needed output : 987654321

    for ( i = 9; i >= 1; i--)
    {
        cout<<i<<endl;
        
    }

    // using while
    int x = 9;
    while ( x >= 1 )
    {
        cout<<x;
        --x;
        cout<<endl;
    }

    
    
        
    return 0;
}