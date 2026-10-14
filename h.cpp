#include "h.h"
#include <cmath>

double h(double x, double y)
{
    return (x * x + std::sin(x * y) + y * y) /
           (1 + x * x + y * y);
}