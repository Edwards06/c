#include <iostream>
using namespace std;
int main(){
    int x, y, aripi, picioare;
    cout << "Introducet numarul de gaini: "; cin >> x;
    cout << "Introducet numarul de purcei: "; cin >> y;
    aripi = 2 * x;
    picioare = aripi + (4 * y);
    cout << "Numarul total de aripi: " << aripi;
    cout << "\nNumarul total de picioare: " << picioare;
}