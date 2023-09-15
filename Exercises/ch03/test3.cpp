#include <iostream>
#include <math.h>
using namespace std;

void print_twice(char phil)
{
    cout << phil << phil << endl;
}

int main()
{
    char argument = 'b';
    print_twice(argument);
    return 0;
}
