#include <iostream>
#include <string>
using namespace std;

int main(){
    // Friends Array
   /* string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
    for (int i = 1; i < 3; i++)
    {
        cout<< i+1 <<friends[i]<<endl;
    }
    */
    //using while
    string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
    int i = 1;
    while (i <3)
    {
        cout<< i +1<<friends[i]<<endl;
        i++;
    }
    
    return 0;
}