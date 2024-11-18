#include <iostream>
using namespace std;

float speed, result;
float const convert = 0.277778;
int main(){
    cout<<"enter your speed km/h :";
    cin >> speed;
    result = speed * convert;
    cout<<"your speed converted to m/s : " << result;
    return 0;
}