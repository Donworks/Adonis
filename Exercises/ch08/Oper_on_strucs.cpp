#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    Point blank = {3.0, 4.0};
    
    Point p1 = {3.0, 4.0};
    Point p2 = p1;
    cout << "(" << p2.x << ", " << p2.y << ")" << endl;

    return 0;
}
