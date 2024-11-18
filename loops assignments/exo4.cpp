#include <iostream>
using namespace std;

int main(){
    int x,y, absoy, result;
    cin >> x >> y;
    if (y == 0)
    {
        result = 1;
    }else{
        result = 1;
        absoy = abs(y);
    }
    for(int i = 1; i <= absoy; i++){
        result *= x;
    }

    if (y < 0 && x =! 0 )
    {
        result = 1;
    }

    cout<< result;
    
    return 0;
    

}