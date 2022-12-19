#include <iostream>
using namespace std;
#include <cmath>
int main() {
  int x, a;
  cout << "Introduceti a: "; cin >> a;
    cout << "Introduceti x: "; cin >> x;
  if (x <= 4) {
    cout << "Raspunsul este: " << sqrt(4 - x) + a * pow(x,3);
  } else if (x > 10) {
    cout << "Raspunsul este: " << a * pow(x,2) - 10 * x + 2;
  } else if (4 < x <= 10) {
    cout << "Raspunsul este: " << a + 100/x + 1,4;
  }
  return 0;
}
