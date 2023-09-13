#include <iostream>
#include <math.h>
using namespace std;

void new_line()
{
    cout << endl;
}

void three_lines()
{
    new_line(); new_line(); new_line();
}

void nine_lines()
{
    three_lines(); three_lines(); three_lines();
}

int main()
{
    cout << " Mercedes Benz." << endl;
    nine_lines();
    cout << " s73 Brabus" << endl;
}
