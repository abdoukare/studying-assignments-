#include <iostream>
using namespace std;

int main()
{
    int vals[] = {10, 20, 30};

    vals[0] = 100;
    vals[1] = 200;
    vals[2] = 300;

    cout << vals[0] << "\n"; // 100
    cout << vals[1] << "\n"; // 200
    cout << vals[2] << "\n"; // 300
}