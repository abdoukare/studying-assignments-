#include <iostream>
#include <string>
using namespace std;
char A;
int main(){
    // Friends Array
    string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
    // desplaying li 3ndhom A majiscul brk 
   /* int count = size(friends);
    for (int i = 0; i < count; i++)
    {
        if (friends[i][0] == 'A')
        {
            cout<<friends[i]<<endl;
        }
        
    }
    */
   int i;
   i = 0;
   int count = size(friends);
   while ( i < count)
   {
    if (friends[i][0] == 'A')
    {
        cout<<friends[i]<<endl;
    }
    i++;
    
   }
   
    return 0;
}