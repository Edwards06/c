#include <iostream>
using namespace std;
int main(){
    int n ,p = 1;
    cout << " Introduce n: "; cin >> n;
    for(int i = 1; i <= n; i++){
        p = p * i;
    }
    cout << p << " ";    

}