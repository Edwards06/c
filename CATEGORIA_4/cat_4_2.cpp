#include <iostream>
using namespace std;
int main()
{
    //Pasul 1:
    int array[100], elements, nr_de_elemente, i , suma = 0;
    float media;
    cout << "Lungimea tabloului undimensional: "; cin >> nr_de_elemente;
    //Pasul 2:
    for ( i = 0; i <= nr_de_elemente; i++){
        cout<<"Introducetii datele in celula " << i << ": = "; cin >> array[i];
    }
    //Pasul 3:
    for (i = 0; i <= nr_de_elemente; i++){
        if(array[i] > 0 && array[i] %2 == 1){
            suma += array[i];
            elements ++;
        }
    }
    //Pasul 4:
    media = suma / elements;
    cout << "Suma = " << suma;
    cout << "\nMedia = " << media;
    return 0;
}