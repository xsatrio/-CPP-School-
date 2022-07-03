#include<iostream>
using namespace std;

int pangkatiterasi(int a, int b){
    //DEKLARASI
    int i;
    int hasil=a;

    //ALGORITMA
    for(i=1; i<b; i++){
        hasil = hasil * a;
    }
    return hasil;
}

main(){
    //DEKLARASI
    int a,b;

    //ALGORITMA
    cout<<"Masukkan bilangannya : "; cin>>a;
    cout<<"Masukkan pangkatnya : "; cin>>b;
    cout<<"Hasilnya adalah : "<<pangkatiterasi(a,b);
}
