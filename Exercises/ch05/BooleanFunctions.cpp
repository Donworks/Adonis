#include <iostream>
#include <cmath>
using namespace std;

bool is_single_digit(int d)
{
    if (d >= 0 && d < 10) {
	    return true;
    } else {
	return false;
    }
}

int main()
{
    cout << is_single_digit(2) << endl;
    bool bigFlag = !is_single_digit(17);
}
