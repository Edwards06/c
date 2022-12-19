#include <iostream>
#include <cstring>
using namespace std;
int main(){
    // char array[5] = {'a', 'e', 'i', 'o', 'u'};
    char input[100];
    int count_v, count_c = 0, i, j;
    char chr[2];
    cout<<"Introduceti o fraza: "; cin>>input; cout << input;
    
    for(i=0; i<=strlen(input); i++){
            chr[0] = tolower(input[i]); 
            if (chr[0]=='a' || chr[0]=='e' || chr[0]=='i'|| chr[0]=='o' || chr[0]=='u'){
                count_v++;
            } 
            else if ((input[i]>='a'&& input[i]<='z') || (input[i]>='A'&& input[i]<='Z'))  
            {
                count_c++;
            }
        
    }
    cout << "\nVocale: " <<  count_v;
    cout << "\nConsoane: " <<  count_c;
}