#include <iostream>
using namespace std;

int current_time, alarm, result;
int main()
{
    cout << "Enter your current time (in 24-hour format): ";
    cin >> current_time;

    cout << "Enter an alarm time (in 24-hour format): ";
    cin >> alarm;

    if (alarm >= current_time) {
        result = alarm - current_time;
    } else {
        result = (24 - current_time) + alarm;
    }

    cout << "You have " << result << " hours left for your next alarm." << endl;
 
    

    return 0;

}


