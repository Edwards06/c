#include <iostream>
using namespace std;
int main(){
    int N,i = 0, s = 0, media = 0;
    cout << "Dati N: "; cin >> N;
    while(i <= N){
            s += i;
            cout << "Numarul impar: "<< i << "\n";
        i++;
    }
    media = s/N;
    cout << "Suma: " << s;
    cout << "\nmedia: " << media;
} 