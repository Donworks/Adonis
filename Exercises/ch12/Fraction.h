#include <iostream>

struct Cars {
    // instance variables
    // using horsepower to divide to of the most powerful s class	
    int Horsepower1, Horsepower2;
    // a modifier 
    Cars();
    Cars(int h, int h2);

    void print();
    double convert_speed(double mod);
    void plus(double add);
    void minus(double sub);
    void times(double mult);
    void divided_by(double div);

};
