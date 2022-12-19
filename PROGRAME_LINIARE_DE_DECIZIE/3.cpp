#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Introduceti datele in a: "; cin >> a;
    cout << "Introduceti datele in b: "; cin >> b;
    c = a;
    a = b;
    b = c;
    cout << "Interschimbarea valorilor variabilelor: a = " << a << ": b = " << b;
}