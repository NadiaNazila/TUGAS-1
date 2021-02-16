/*Tugas1 Prak. Struktur Data*/
/*Transpose Matriks*/
/*Nadia Nazila Ramadina*/
/*NIM: 20051397028*/

#include<iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    const int kolom = 2, baris = 2;
    int array[baris][kolom] = {{3,6},{-2,10}};
    int arrayTranspose[kolom][baris];
    
        cout << "Matriks : "<<endl;
    for(int i = 0; i<baris; i++){
        for(int n = 0; n<kolom; n++){
            cout << array[i][n]<<" ";
            arrayTranspose[n][i] = array[i][n];
        }
        cout<<endl;
    }


cout<<endl<<"Transpose Matriks : "<<endl<<endl;

    for(int i = 0; i<kolom; i++){
        for(int n = 0; n<baris; n++){
            cout<<arrayTranspose[i][n]<<" ";
        }
        cout<<endl;
    }


    cout << endl << "\n"<<endl<<endl;
getch();
return 0;
}
