#include <iostream>
using namespace std;
int main(){
    int array[100], nr_de_celule = 0, i, minim, pos ;
    cout << "Introduceti numarul de celule: "; cin >> nr_de_celule;
    for(i = 0; i <= nr_de_celule; i++){
        cout << "Numarul din celua "<< i << ": = "; cin >> array[i];
    }
  
    for(i=0; i <= nr_de_celule; i++){
        if( array[i] < minim){
            minim = array[i];
            pos = i;
        }
    }
    cout << "Minimul este= " << minim;
    cout << "\nPositia: " << pos ;
}