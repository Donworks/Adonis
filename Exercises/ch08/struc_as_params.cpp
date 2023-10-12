#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

void print_point(Point p)
{
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

double distance(Point p1, Point p2)
{
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy);
}

int main()
{
    print_point();
    distance(1 , 2);
    return 0;
}
