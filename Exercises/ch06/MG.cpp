#include <iostream>
#include <cmath>
using namespace std;

void print_multiples(int n, int high)
{
    int i = 1;
    while (i <= high) {
	cout << n * i << "   ";
        i = i + 1;
    }
    cout << endl;
}

int main()
{
    print_multiples(7);
    return 0;
}
