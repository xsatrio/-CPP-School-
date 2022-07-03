#include<iostream>
using namespace std;
int faktorial(int n);

main(){
    int angka, hasil;
    cout<<"Menghitung faktorial dari : "; cin>>angka;
    hasil = faktorial(angka);
    cout<<"\nNilai faktorialnya adalah : "<<hasil<<endl;
}

int faktorial(int n){
    if(n<=1){
        cout<<n;
        return n;
    }
    else{
        cout<<n<<"*\n";
        return n * faktorial(n-1);
    }
}
