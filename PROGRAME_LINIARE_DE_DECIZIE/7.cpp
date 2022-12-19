#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int p, a;
    double ll, d; 
    cout << "Perimetru este = "; cin >> p;
    ll = p / 4;
    d = ll * sqrt(2);
    a = pow(ll,2);
    cout << "Lungimea diagonalei = " << d << "\nAria = " << a;
}