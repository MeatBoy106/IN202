#include "CComplex.h"

CComplex add(CComplex a, CComplex b)
{
    CComplex ret;
    ret.a = a.a + b.a;
    ret.b = a.b + b.b;
    return ret;
}
