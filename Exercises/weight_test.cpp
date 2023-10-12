#include <iostream>
#include <list>
using namespace std;


void print_list(list<int> My_list, int number) {
    
    for( int i = 0; i < number; i++) {
        cout <<   << endl;


    }
}
int main()
{
int num;
list<int> My_list = { 300, 125, 99, 87, 75, 118, 100, 66, 113};

cout << " Enter the amount of data";
cin >> num;
cout << " Data Output ";
print_list(My_list, num); 

}
