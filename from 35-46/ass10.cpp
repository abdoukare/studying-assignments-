#include <iostream>
#include <array>
using namespace std;

int main(){

    array<int, 6> nums = {10, 20, 30, 40, 20, 50};
    // method one 
    cout<<"First : " <<nums[0] <<endl;
    cout<<"last : " <<nums[nums.size() - 1] <<endl;

    // method two

    cout<<"First :" <<nums.front()<< endl;    
    cout<<"last : " <<nums.back() <<endl;

    // method 3
    cout<<"first : " << nums.at(0)<<endl;
    cout<< "last : " << nums[nums.size() - 1] <<endl;
    return 0;
}