#include <iostream>
using namespace std;

int main(){
    int array[20][20];
    int nr_of_element, i, j;

    cout << "Type a size of array: ";
    cin >> nr_of_element; // Get user input from the keyboard
    // insert data in array
    for (j=0; j<=nr_of_element; j++){
        for (i=0; i<=nr_of_element; i++){
            cout << "\nInsert data in cell nr " << i << ", "<< j << ": = ";
            cin >> array[i][j];
        } 
    }

    // show data of array
    for (j=0; j<=nr_of_element; j++){
        for (i=0; i<=nr_of_element; i++){
            cout << array[i][j];
        }
        cout << "\n";
    }

    // diagonala principala
    cout << "Element from diagonal principal: ";
    for (j=0; j<=nr_of_element - 1; j++){
        cout << array[j + 1][j] << " ";
            
        
    }
}

