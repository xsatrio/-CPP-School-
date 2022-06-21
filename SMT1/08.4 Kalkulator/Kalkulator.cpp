//PROGRAM KALKULATOR
#include <iostream>
using namespace std;

main()
{
    //DEKLARASI
    char opt;
    int bil1,bil2;

    //ALGORITMA
    cout<<"==============="<<endl;
    cout<<"MENU KALKULATOR"<<endl;
    cout<<"==============="<<endl;
    cout<<"(+) Penjumlahan"<<endl;
    cout<<"(-) Pengurangan"<<endl;
    cout<<"(*) Perkalian"<<endl;
    cout<<"(/) Pembagian"<<endl;
    cout<<endl;
    cout<<"Bilangan Pertama : ";cin>>bil1;
    cout<<"Bilangan Kedua : "; cin>>bil2;
    cout<<"Masukkan Pilihan Perhitungan : "; cin>>opt;
    cout<<endl;
    switch(opt)
    {
        case '+' : {cout<<"Hasil Penjumlahan : "<<bil1+bil2<<endl; break;}
        case '-' : {cout<<"Hasil Pengurangan : "<<bil1-bil2<<endl; break;}
        case '*' : {cout<<"Hasil Perkalian : "<<bil1*bil2<<endl; break;}
        case '/' : {cout<<"Hasil Pembagian : "<<bil1/bil2<<endl; break;}
        default : {cout<<"Salah Inputan"<<endl;}
    }
}
