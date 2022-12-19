#include <iostream>
using namespace std;
int main(){
    int N, i, s = 0;
    cout << "Dati N: "; cin >> N;
    for(i = 0; i <= N; i++){
        if(i % 2 != 0){
            s += i;
            cout << "Nr impar: " << i << " \n";
            
        }
    }
    cout << "Suma: "<< s;
} 