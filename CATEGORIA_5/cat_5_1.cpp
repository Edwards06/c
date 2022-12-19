#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int i = 0;
    char s[100];
    cout << "Introduceti o fraza: "; 
    cin.get(s,100);
    for(i=0; s[i] != '\0'; i++){}
    while(s[i] != '\0'){
        i++;
    }
    cout << i;

}
