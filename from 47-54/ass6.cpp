#include <iostream>
#include <cmath>
using namespace std;

int main(){
    for (int i = 10; i < 10000000; i*=i)
    {
        cout<<i<<endl;

    }
    cout<<"\n==================================\n";
    int j = 10;
    while (j <= 100000000)
    {
        cout<<j<<endl;
        j *= j;
    }
    
    return 0;
}