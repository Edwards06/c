#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char array[5] = {'a', 'e', 'i', 'o', 'u'};
    char input[100];
    int count=0, i, j;
    cout<<"Introduceti o fraza: "; cin>>input; cout<<input;
    
    for(i=0; i<=strlen(input); i++){
        for(j=0; j<=strlen(array)-1; j++){
            if (tolower(input[i]) == array[j]){
                count++;
            }
        }
    }
    cout << count;
}