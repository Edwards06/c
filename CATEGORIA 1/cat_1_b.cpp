#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>
int main(){
    int A;
    float g;
    cout << "Introduceti nr de ordine al elevului: "; cin >> A;
    g = ((log(A))/pow(M_E,A + 1)) - (cbrt(A + 5)) / (abs(1-sqrt(A))) + 2 * pow(A,3);
    cout << "g(A) = " << g;
}