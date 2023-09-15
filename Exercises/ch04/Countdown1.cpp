#include <iostream>
using namespace std;

void countdown(int n)
{
    if (n == 0) {
	cout << "Blastoff!" << endl;
    } else {
	cout << n << endl;
	countdown(n-1);

    }
}
// didnt work the first time trying to figure out why
int main()
{
    countdown(3);
    return 0;
}
// i finially realized what went wrong didnt complte the whole code
