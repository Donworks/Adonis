#include <iostream>
#include <cmath>
using namespace std;

struct Time{
    int hour, minute;
    double second;
};

void print_time(Time t){
    cout << t.hour << ":" << t.minute << ":" << t.second;
}

Time add_time(Time& t1, Time& t2){
    Time sum;
    sum.hour = t1.hour + t2.hour;
    sum.minute = t1.minute + t2.minute;
    sum.second = t1.second + t2.second;
    return sum;
}

int main(){
    Time current_time = {6, 30, 50.0};
    Time cook_time = {1, 30, 50.0};
    Time completed_time = add_time(current_time, cook_time);
    print_time(completed_time);
}
