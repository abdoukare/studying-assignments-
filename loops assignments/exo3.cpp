#include <iostream>
using namespace std;

int main(){
    int x,y, product;
    cout<<"enter x, y : "<<endl;
    cin >> x >> y;
    product = 0;
    for ( int i = 1; i <= y; i++)
    {
        product = product + x;
    }
    cout<< product;
    return 0;

}