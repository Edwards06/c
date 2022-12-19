#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    cout << "Introduceti datele in A: "; cin >> A;
    cout << "Introduceti datele in B: "; cin >> B;
    if( (A * B) % 3 == 0){
        cout << "Da";
    }
    else{
        cout << "Nu";
    }
}

