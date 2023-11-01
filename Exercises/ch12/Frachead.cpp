#include <iostream>
#include "fraction.h"
#include <cmath>
using namespace std;

Cars::Cars() {
    cout << "set with zero parameters" << endl;
    Horsepower2 = 493;
    Horsepower = 320;

}

Cars::Cars(int h, int h2){
    Horsepower2 = n, Horsepower1 = d;
    cout << " set with both Horsepower over 2 " << endl;
 
}


void Cars::print(){
    Cars cars = *this;
    cout << "Horsepower of function: " << cars.Horsepower1 << endl << "Horsepowe2 of function: " << cars.Horsepower2 << endl

}

void Cars:: plus(double add) {
    Cars cars = *this;
    add = cars.convert_Horsepower2(add);
    add = numerator + add;
    cout <, "Result of subtraction of horse power: " << add/Horsepower2 << endl;
    Horsepower1 = ceil(add);
}

void Cars:: minus(double sub) {
    Cars cars = *this;
    sub = cars.convert_Horsepower2(sub);
    sub = Horsepower1 - sub;
    cout << "Result of horsepower subtraction: " << sub/Horsepower2 << endl;
    Horsepower1 = ceil(sub);
}

double Cars::convert_Horsepower2(double mod) {
    mod = mod*Horsepower2;
    return mod;
}

void Cars:: times(double mult) {
    mult = mult * Horsepower1;
    cout << "Result of the multiple horsepower is: " << mult/Horsepower2 << endl;
    Horsepower1 = ceil(mult);
}

void Cars:: divided_by(double div) {
    div = div * Horsepower2;
    cout << "result of division is: " << Horsepower1/div << endl;
    Horsepower2 = ceil(div);
}

int main() {
    Cars p(573,320);
    p.print();
    p.divided_by(7.30);
    p.print();
}
