#include <iostream>
using namespace std;
int main(){
    int i = 0, s = 0;
    float media, N = 0;
    cout << "Dati N: "; cin >> N;
    do{
            s += i;
            cout << "Numarul impar: "<< i << "\n";
        i++;
    }while(i <= N);
    media = s/N;
    cout << "Suma: " << s;
    cout << "\nmedia: " << media;
} 