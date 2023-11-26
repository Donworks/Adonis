#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

Point p1 = {3.0, 4.4};
Point p2 = p1;

void print_point(p1){
    cout << "(" << p1.x << ", " << p1.y << ")" << endl;
}
/**
double distance(Point p1, Point p2)
{
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy)
}
**/
int main()
{
//    print_point();
//    distance(1 , 2);
  //  return 0
    cout << print_point << "hmm" << endl;
}
