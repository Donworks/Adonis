#include <iostream>
using namespace std;

class integer
{
    private:
    int num;


    public:
    integer() {num = 0;}
    void set(int i) {num = i; }
    int get() const {return num; }

};

int main()
{
    integer obj1, obj2;

    obj1.set(8);
    obj2.set(2);

    cout << obj1.get() << "," << obj2.get() << endl;

    obj1.set(4*4);

    cout << obj1.get() << "," << obj2.get() << endl;
}
