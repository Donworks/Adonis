#include <iostream>
#include <cmath>
using namespace std;

void print_multiples(int n)
{
    int i = 1;
    while (i <= 6) {
	cout << n * i << "   ";
	i = i + 1;
    }
}

int main()
{
    print_multiples(1);
}
