#include <iostream>
using namespace std;
int main(){
    int x, a, b;
    cout << "Introduceti intervalul a: "; cin >> a;
    cout << "\nIntroduceti intervalul b: "; cin >> b;
    cout << "\n Introduceti valoarea lui x: "; cin >> x;
    if ( x >= a && x <= b || x <= a && x >=b ) {
        cout<<"Da";
    }
    else{
        cout<<"Nu";
    }
}