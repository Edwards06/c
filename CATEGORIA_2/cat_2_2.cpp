#include <iostream>
using namespace std;
int main(){
    int A, B, C;
    cout << "Introduceti de cate litri este sticla: "; cin >> A;
    cout << "Introduceti marimea vasului: "; cin >> B;
    C = B / A;
    cout << "Pentru a unple un vas de "<< B << " litri, cu marimea stclei de " << A << " litri, este nevoie de " << C << " sticle.";
}