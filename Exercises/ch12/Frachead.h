struct Cars{
    // instance variables
    // using horsepower to divide to of the most powerful s class	
    int Horsepower1, Horsepower2;
    // a modifier 
    void print() const;
    bool after(const Cars& cars2) const;
    Cars add(const Cars& c2) const;
};
