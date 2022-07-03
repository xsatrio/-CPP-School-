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

int pangkatrekursif(int a, int b){
    if(b<=1){
        cout<<"Ini akhir rekursif\n";
        return a;
    }
    else{
        cout<<"Ini rekursif\n";
        return a * pangkatrekursif(a,(b-1));
    }
}

main(){
    //DEKLARASI
    int a,b;

    //ALGORITMA
    cout<<"Masukkan bilangannya : "; cin>>a;
    cout<<"Masukkan pangkatnya : "; cin>>b;
    cout<<"Hasil menggunakan iterasi adalah : "<<pangkatiterasi(a,b)<<endl;
    cout<<"Hasil menggunakan rekursif : "<<pangkatrekursif(a,b)<<endl;
}

