#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float m, h, a = 5,b = 5, c = 12, aria;
    m = c / 2;
    h = sqrt(pow(m,2) - pow(a,2));
    aria = (c * h) / 2;
    cout <<  "Aria = " << aria;
}