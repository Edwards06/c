#include <iostream>
using namespace std;
int main(){
    int N,i, s = 0;
    float Media;
    cout << "Dati N: "; cin >> N;
    for(i = 0; i <= N; i++){
        s += i;
               
    }
    Media = s/N;
    cout << "Suma: "<< s;
    cout << "\nMedia: "<< Media;
} 