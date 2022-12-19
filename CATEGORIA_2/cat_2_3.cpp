#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int A, B;
    cout << "Introduceti datele in A: "; cin >> A;
    cout << "Introduceti datele in B: "; cin >> B;
    int c[3] = {A,B};
    for(int i = 0; i <= 1; i++){
        if( c[i] < 0 && c[i] % 2 == 0){
            cout << "\n" << c[i]<< " - Este par si negativ";
        }
        else{
            cout << "\n" << c[i]<< " - Nu este par sau negativ";
        }
    }
}
    