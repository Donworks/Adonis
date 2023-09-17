#include <iostream>
#include <cmath>
using namespace std;

void sequence(int n)
{
    while(n !=1){
	cout << n << endl;
	if (n%2 == 0) {
	    n = n / 2;
	} else {
	    n = n * 3 + 1;
	}
    }
}

int main()
{
    sequence(1);
    return(0);
}
