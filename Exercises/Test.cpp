#include <iostream>
using namespace std;

struct Point {
    double x, y;
};

int main() {
    Point p1 = {3.0, 4.0};
    Point p2 = p1;
    cout << "(" << p2.x << ", " << p2.y << ")" << endl;
    double distance = p2.x * p2.x + p2.y * p2.y;
     cout << distance << endl;
}
