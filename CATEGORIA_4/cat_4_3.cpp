#include <iostream>
using namespace std;
int main(){
    //Pasul 1:
    int array[100], nr_de_elemente, nr_position = 0, i;
    int nr_max = 0;
    int position = 0;
    cout << "Introduceti nr de celule: "; cin >> nr_de_elemente;
    for (i = 0; i <= nr_de_elemente; i++){
        cout << "Numarul din celula " << i <<": = "; cin >> array[i];
    }

    //Pasul 2:
    for (i = 0; i <= nr_de_elemente; i++){
        if (array[i] > nr_max){
            nr_max = array[i];
            position = i;
        }
    }
        
    //Pasul 4:
    cout << "Cel mai mare numar: " << nr_max;
    cout << "\nPositia celui mai mare numar este: "<< position;
    
}   