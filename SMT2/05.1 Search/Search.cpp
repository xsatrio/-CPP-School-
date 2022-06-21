#include<iostream>
using namespace std;
const int Nmaks=100;
typedef int ArrayInt[Nmaks];

void BacaArray(ArrayInt A, int n);
void SeqSearch1(ArrayInt A, int n, int x, bool *ketemu);

int main(){
    //Deklarasi
    ArrayInt A;
    int n, x;
    bool found;

    //Algoritma
    cout<<"Masukkan Banyaknya Elemen n: "; cin>>n;
    BacaArray(A,n);
    cout<<"\nMasukkan nilai yang dicari : "; cin>>x;
    SeqSearch1(A,n,x,&found);
    if (found){
        cout<<"\n"<<x<<" Ditemukan\n";
    }
    else{
        cout<<"\n"<<x<<" Tidak Ditemukan\n";
    }
}

void BacaArray(ArrayInt A, int n){
    //Deklarasi
    int i;

    //Algoritma
    i=0;
    for(i=0; i<n; i++){
        cout<<"Masukkan Nilai A["<<i<<"] : "; cin>>A[i];
    }
}

void SeqSearch1(ArrayInt A, int n, int x, bool *ketemu){
    //Deklarasi
    int i;
    //Algoritma
    i=0;
    while((i<n) && (A[i]!=x)){
        i=i+1;
    }
    if(A[i]==x){
        *ketemu=true;
    }
    else{
        *ketemu=false;
    }
}
