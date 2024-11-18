#include <iostream>
using namespace std;

int main(){
    int index = 10;
    int jump = 2;
    for (;;)
    {
        cout<<index<<endl;
        index -= jump;
        if (index < 4)
        {
            break;
        }
        
        
    }
    
}