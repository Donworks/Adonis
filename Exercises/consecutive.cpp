#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> arr = {10, 11, 12, 12, 13};

    array<int, 5>::iterator it;

    cout << "The array is: ";
    for(it = arr.begin(); it < arr.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;


    cout << "Size of the array is: " << arr.size() << endl;

    return 0;
}
