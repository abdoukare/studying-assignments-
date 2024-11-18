#include <iostream>
#include <string>
using namespace std;

int main(){

    /*
    =========
    = Ahmed =
==================
== A, h, m, e, d =
==================

    */
  string friends[] = {"Aboody", "Malak", "hamid"};
  int count = size(friends);
  for (int i = 0; i < count; i++)
  {
    cout<<"=========\n";
    cout<<"= "<<friends[i]<<" =\n";
    cout<<"============\n";
    cout<<"== ";
    for (int j = 0; j< size(friends[i]); j++)
    {
        cout<<friends[i][j]<<", ";
    }
    
}
  
  
  return 0;
}