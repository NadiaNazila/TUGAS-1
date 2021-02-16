/*Tugas1 Prak. Struktur Data*/
/*Transpose Inverse Matriks*/
/*Nadia Nazila Ramadina*/
/*NIM: 20051397028*/

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    const int kolom = 2, baris = 2;
    int array[baris][kolom] = {{3,6},{-2,10}};
    int arrayTranspose[kolom][baris];


    cout << "Matriks :"<<endl;
    for(int i = 0; i<baris; i++){
        for(int n = 0; n<kolom; n++){
            cout << array[i][n]<<" ";
            arrayTranspose[n][i] = array[i][n];
        }
        cout<<endl;
    }
    
    
    double A[2][2]={1,2,3,4};
    int i,j;
    double det;
 

    cout<<"Matriks A : "<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<A[i][j]<<" ";
        }
    cout<<endl;
    }   
    cout<<endl;
    
    det=A[0][0]*A[1][1]-A[1][0]*A[0][1];
    cout<<"Determinan A : ";
    cout<<det;
    cout<<endl;
    double A2[2][2];
    A2[1][1]=A[0][0];
    A2[0][0]=A[1][1];
    A2[0][1]=A[0][1]*-1;
    A2[1][0]=A[1][0]*-1;
    cout<<"Invers A : "<<endl;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<A2[i][j]/det<<" ";
        }
        cout<<endl;
    }
    
return 0;
}

