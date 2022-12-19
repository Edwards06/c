#include <iostream>
using namespace std;
int main(){
    int N, i;
    cout << "Dati N: "; cin >> N;
    for(i = 0; i <= N; i++){
        if(i % 3 == 0 && i % 2 == 0){
            cout << i << " ";
        }
    }

} 