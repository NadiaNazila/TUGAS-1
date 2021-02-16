/*Tugas1 Prak. Struktur Data*/
/*Perkalian Matriks*/
/*Nadia Nazila Ramadina*/
/*NIM: 20051397028*/

#include<iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{

    const int column = 2, rows = 2;
    int arrayA[rows][column] = {{3,6},{-2,10}};
    int arrayB[column][rows]= {{3,6},{-2,10}};

    cout << "Matriks A " << endl;
    for(int z = 0; z<rows; z++){
        for(int x = 0; x<column; x++){
            cout << arrayA[z][x] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Matriks B " << endl;
    for(int z = 0; z<column; z++){
        for(int x = 0; x<rows; x++){
            cout << arrayB[x][z] << " ";
        }
        cout << endl;
    }

    cout << endl << "Hasil Perkalian Matriks " << endl;

    for(int z = 0; z<rows; z++){
        for(int x = 0; x<column; x++){
            int hasil = arrayA[z][x] * arrayB[x][z];
            cout << "Hasil " << arrayA[z][x] << " x " << arrayB[x][z] << " = " << hasil << endl;
        }
    }

    return 0;
}
