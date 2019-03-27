#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
    double mA, mB;
public:
    Complex(double a, double b);
    Complex add(Complex other);
    void print();
};

#endif // COMPLEX_H
