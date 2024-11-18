#include <iostream>
using namespace std;

int main()
{
    // example 1

    int vals[]{100, 200, 600, 200, 100};
    if (vals[0] == vals[4] && vals[1] == vals[3])
    {
        cout<<"the array is palindrom ";
    }

    // example 2
    int vals[]{100, 200, 200, 100};
    if (vals[0] == vals[3] && vals[1] == vals[2])
    {
        cout<<"the array is palindrom";
    }
    
    // example 3
    int vals[] = {100, 300, 600, 200, 100};
    if (vals[0] == vals[4] && vals[1] == vals[3])
    {
        cout<<"the array is palindrom";
    }else{
        cout<<"the array is not palindrome";
    }
    
    
    return 0;
}