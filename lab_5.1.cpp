#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double h(double x, double y)
{
    return (x * x + sin(x * y) + y * y) / (1 + x * x + y * y);
}
int main()
{
    double s, t, z;
    cout << fixed << setprecision(3);
    cout << "s = "; 
    cin >> s;
    cout << "t = "; 
    cin >> t;
    z = (h(s, t * t) + pow(h(t, 1 + s * s), 2)) / (1 + h(s * t, 1));
    cout << fixed << setprecision(3);
    cout << "z = " << z << endl;

    return 0;
}