#include <iostream>
using namespace std;
int main(){
    int N,i = 0;
    cout << "Dati N: "; cin >> N;
    do {
        if( i % 2 == 0 && i % 3 == 0){
            cout << " " << i;
            
        }
        i++;
    }
    while (i <= N);
  
    
}