#include <iostream>
#include <string>
using namespace std;

struct Time {
    int hour, minute;
    double second;
};

string print_time(Time& t) {
    string s = to_string(t.hour) + ":" + to_string(t.minute) + ":" + to_string((int)t.second);
    return s;
    // cout << t.hour << ":" << t.minute << ":" << t.second << endl;
}


int main() {
    Time time = {11, 59, 3.14159};

    cout << "Time is: " << print_time(time);
    // print_time(time);
    cout << endl;

    return 0;
}
