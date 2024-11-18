#include <iostream>
using namespace std;

int main(){
    int nums [] = {10, 20, 14, 28, 40, 80, 15, 30};
    int count = size(nums);
    int i;
    for ( i = 0; i < count; i++)
    {
        if (nums[i] + nums[i] == nums[i + 1])
            cout<<nums[i]<<endl;
    }
    return 0;
}