#include <iostream>
using namespace std;

int main(){
    int array[100];
    int nr_of_element, i, suma = 0;
    float media;
    int elements = 0;

    cout << "Type a size of array: ";
    cin >> nr_of_element; // Get user input from the keyboard
    // insert data in array
    for (i=0; i<=nr_of_element; i++){
        cout << "\nInsert data in cell nr " << i << ": = ";
        cin >> array[i];
    }
    // calculate suma
     for (i=0; i<=nr_of_element; i++){
        if(array[i] < 0 && array[i] %2 == 0){
            suma += array[i];
            elements ++;
        } 
    }
    media = suma / elements;
    cout << "\nSuma equal: " << suma;    
    cout << "\nMedia equal: " << media;  
    
}
