#include <iostream>
#include "Time.h"

void Time::print_time(){
    cout << hour << ":" << minute << ":" << second;
}

Time Time::add_time(Time& t1)
{
    Time sum;
    sum.hour = t1.hour + hour;
    sum.minute = t1.minute + minute;
    sum.second = t1.second + second;
    return sum;
}

Time::Time(int h, int m, double s ) {
    hour = h; minute = m; second = s;
}
