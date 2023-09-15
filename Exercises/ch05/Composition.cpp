#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dsquared = dx * dx + dy * dy;
    double result = sqrt(dsquared);
    return result;
}

double area(double radius) {
    double pi = acos(-1.0);
    double area = pi * radius * radius;
    return area;
}

double anna(double xc, double yc, double xp, double yp) {
    double radius = distance(xc, yc, xp, yp);
    double result = area(radius);
    return result;
}

int main()
{

    double dist = anna (1.0,2.0,4.0,6.0);
    cout << dist;
}
