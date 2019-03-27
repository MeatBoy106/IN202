#include <cstdio>
#include "CComplex.h"
#include "Complex.h"

int main() {
    {
    CComplex a = {1, 2}, b = {3, 4},
             c = add(a, b);
    printf("(%2.1f + i%2.1f) + (%2.1f + i%2.1f) = %2.1f + i%2.1f\n",
           a.a, a.b, b.a, b.b, c.a, c.b);
    }{
    Complex a(1, 2), b(3, 4), c(a.add(b));
    a.print(); printf(" + "); b.print(); printf(" = "); c.print();
    }
}
