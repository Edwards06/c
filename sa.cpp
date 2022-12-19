#include <iostream>
using namespace std;
int main(){
   int n,m,suma;
   int T[20][20];
   cin >> n >> m;

   for(int i=0; i<=n-1; i++){
        for (int j=0; j<=m-1; j++){
            cout << "i: " << i << " j: " << j << " - ";
            cin >> T[i][j];
        }
   }

   for(int i=0; i<=n-1; i++){
        for (int j=0; j<=m-1; j++){
            suma += T[i][j];
        }
   }
   cout << "Media: " << suma / (n*m);
}