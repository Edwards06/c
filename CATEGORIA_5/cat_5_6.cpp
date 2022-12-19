#include <iostream>
#include <cstring>
using namespace std;
int main(){
    // int array[10] = {0,1,2,3,4,5,6,7,8,9};
    char input[100];
    int s, i, j;
    cout << "Introduceti fraza: "; gets(input);
    cout << strlen(input);

    for(i = 0; i<=strlen(input); i++){
        if(input[i] >= 48 && input[i] <= 57 ){
            s++;
        }
            
    }
    cout<<"Afisare: "<< s;
}