#include <iostream>
#include <math.h>
using namespace std;

void print_parity(int x) {
    if (x % 2 == 0) {
	cout << "x is even" << endl;
    } else {
	cout << "x is odd" << endl;
    }
}
