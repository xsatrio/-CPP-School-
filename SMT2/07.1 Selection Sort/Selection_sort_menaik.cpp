#include<iostream>
using namespace std;
const int Nmaks=100;
typedef int Arrayint[Nmaks];

void BacaArray(Arrayint A, int n);
void TampilArray(Arrayint A, int n);
void SelectionSort(Arrayint A, int n);

main(){
    //Deklarasi
    Arrayint A;
    int n;

    //Algoritma
    cout<<"Masukkan Banyak Data :"; cin>>n;
    BacaArray(A,n);
    cout<<"\nMasukkan Sebelum Diurutkan\n\n";
    TampilArray(A,n);
    SelectionSort(A,n);
    cout<<"\nData setelah diurutkan\n\n";
    TampilArray(A,n);
}

void SelectionSort(Arrayint A, int n){
    //Deklarasi
    int i,imin,j,temp;

    //Algoritma
    for(i=0; i<n-1; i++){
        imin = j;
        for(j=i; j<n; j++){
            if(A[j]<A[imin]){
                imin = j;
            }
        }
    temp=A[i];
    A[i]=A[imin];
    A[imin]=temp;
    }
}

void TampilArray(Arrayint A, int n){
    //Deklarasi
    int i;

    //Algoritma
    for(i=0; i<n; i++){
        cout<<"Data Array A["<<i<<"] adalah "<<A[i]<<" \n";
    }
}

void BacaArray(Arrayint A, int n){
    //Deklarasi
    int i;

    //Algoritma
    for(i=0; i<n; i++){
        cout<<"Masukkan data Array A["<<i<<"] : "; cin>>A[i];
    }
}
