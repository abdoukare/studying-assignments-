#include <iostream>
using namespace std;
#include <array>

int main(){

    //template<type,size> identifier
    array<int, 3> nums = {};

  // Do Not Edit
  nums.fill(100);
  cout << nums[0] << "\n"; // 100
  cout << nums[1] << "\n"; // 100
  cout << nums[2] << "\n"; // 100

  return 0;
}