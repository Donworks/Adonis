#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
    double second;
};
// had trouble with five erros untill i realized i forgot my struct

bool print_after(Time& t1, Time& t2) {
    if (t1.hour > t2.hour) return true;
    if (t1.hour < t2.hour) return false;

    if (t1.minute > t2.minute) return true;
    if (t1.minute > t2.minute) return false;

    if (t1.second > t2.second) return true;
    return false;
}

int main() {
   Time t1 = { 11, 59, 3.14159};
   Time t2 = { 10, 30, 3.12159};

   cout << "Compared time:" << print_after(Time);
   cout << endl;

   return 0;
}
