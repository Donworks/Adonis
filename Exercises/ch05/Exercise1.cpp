#include <iostream>
#include <cmath>
using namespace std;

double e = exp(1.0);
double distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    cout << "dx is " << dx << endl;
    cout << "dy is " << dy << endl;    
    return 0.0;
}

int main()
{
    double dist = distance(1.0,2.0,4.0,6.0);
    cout << "dist is: " << dist <<endl;
}

