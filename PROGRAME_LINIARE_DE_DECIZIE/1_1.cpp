#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x, y ,a , b , c, abc, a1 ,b1, c1, xy;
    cin >> a >> b >> c;
    
    abc = a * b * c;
    a1 = pow(a,3);
    b1 = pow(b,3);
    c1 = pow(c,3);
    y = max(b1, c1);
    x = max(abc, a1);
    xy = max( y , x );
    cout << xy;
}