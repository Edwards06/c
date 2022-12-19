#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Introdceti un numar de la 1 pana la 4: "; cin >> n;
    switch (n) {
        case 1:
            cout << "Iarna";
            break;
        case 2:
            cout << "Primavara";
            break;
        case 3:
            cout << "Vara";
            break;
        case 4:
            cout << "Toamna";
            break;
        default:
            cout << "Error";
            break;
    }
    return 0;
}