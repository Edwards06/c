#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>
int main(){
    int A;
    float h;
    cout << "Introduceti nr de ordine al elevului: "; cin >> A;
    h = 2 * acos((2 * M_PI)/A) * (sqrt(abs(1-A))) * pow(M_E,2);
    cout << "h(A) = " << h;
}