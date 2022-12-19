#include <iostream>
using namespace std;
int main(){
    int n ,a ,b ,c ,x;
    cout << "Introduceti un numar natural n: "; cin >> n;
    if (n > 1000 || n < 99){
        cout << "Ati introdus un numar mai mare sau mai mic decat 3 cifre. ";
    }
    else {a = n / 100;
    b = n % 100 / 10;
    // c = n % 10
    x = b * 10 + a;
    x = x * 10 + 9;
    cout << "x= " << x;}
    
}