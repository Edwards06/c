#include <iostream>
using namespace std;
int main(){
    int N,i = 0, s = 0;
    cout << "Dati N: "; cin >> N;
    while(i <= N){
        if( i % 2 != 0){
            s += i;
            cout << "Numarul impar: "<< i << "\n";
            
        }
        i++;
    }
    cout << "Suma: " << s;
} 