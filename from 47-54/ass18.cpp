#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i <= 102; i++)
    {
        if (i >20 && i <99)
        {
            continue;
        }
        if (i <10)
            cout<<"00"<<i<<endl;
        else
        if (i <100 )
            cout<<"0"<<i<<endl;
        else // i > 100
        cout<<""<<i<<endl;
        
        
        
        

        
        
    }
    return 0;
}