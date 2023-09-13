#include <iostream>
#include <math.h>
using namespace std;

void countdown(int n) {
    if (n == 0) {
	cout << "Blastoff!" << endl;
    } else {
	cout << n << endl;
	countdown(n-1);

    }
}
// didnt work the first time trying to figure out why
