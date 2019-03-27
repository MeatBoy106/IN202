#include <cstdio>
#include "Complex.h"

Complex::Complex(double a, double b):
    mA(a), mB(b)
{}

Complex Complex::add(Complex other)
{
    return Complex(mA + other.mA, mB + other.mB);
}

void Complex::print()
{
    printf("%2.1f + i%2.1f",mA, mB);
}
