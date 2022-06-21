//PROGRAM MENGHITUNG HURUF
#include <iostream>
using namespace std;

main()
{
    char huruf;
    int jumlah;

    cout<<"Masukkan 1 Abjad/huruf : "; cin>>huruf;

    jumlah=0;
    do
    {
        jumlah=jumlah+1;
        cout<<"Masukkan 1 Abjad/huruf : "; cin>>huruf;
    }
    while(huruf!='.');

    cout<<endl;
    cout<<"Jumlah karakter tanpa titik : "<<jumlah<<endl;
}
