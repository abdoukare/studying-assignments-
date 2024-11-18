#include <iostream>
using namespace std;

int main(){
    for (int i = 2; i < 126; i= i*2+2)
    {
        cout<<i<<endl;
    }

    int j= 2;
    while (j <= 126)
    {
        cout<<j<<endl;
        j = j*2+2;
    }
    return 0;
    
}