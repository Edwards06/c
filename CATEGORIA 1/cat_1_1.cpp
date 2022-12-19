#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float f, A;
  
    cout << "Introduceti nr de ordine al elevului: "; cin >> A;
    f = 2 * cos(( 3 * M_PI) / A) * sin(( 5 * M_PI ) / A) - 1;
    cout << "f(A) = " << f;
    return 0;
}
