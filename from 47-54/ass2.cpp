#include <iostream>
using namespace std;

int main() {
    int index = 2; 
    for (;;) { 
        cout << index << "\n"; 
        if (index == 8) 
            break;
        index++; 
    }
    return 0;
}

