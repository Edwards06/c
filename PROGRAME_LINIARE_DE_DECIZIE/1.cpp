#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;
int main(){
    int r;
    float perimetru;
    cout << "Introduceti lungimea razei cercului: "; cin >> r;
    perimetru = M_PI * pow(r,2);
    cout << "Perimetrul este = " << perimetru;
}