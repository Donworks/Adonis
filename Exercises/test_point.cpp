#include <iostream>
using namespace std;

struct Point {
    double x, y;
};

int main() {
    Point blank;
    blank.x = 3.0;
    blank.y = 4.0;

    cout << "(" << blank.x << ", " << blank.y << ")" << endl;
    double distance = blank.x * blank.x + blank.y * blank.y;


}
