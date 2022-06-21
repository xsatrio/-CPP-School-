//PROGRAM KONVERSI DETIK
#include <iostream>
using namespace std;

main()
{
    //DEKLARASI
    int jam,menit,detik;

    cout<<"Konversi dari Detik ke Jam, Menit, dan Detik"<<endl;
    cout<<"Masukan Nilai Detik : "; cin>>detik;

    //ALGORITMA
    jam=detik/3600;
    detik=detik%3600;
    menit=detik/60;
    detik=detik%60;

    cout<<jam<<" jam "<<menit<<" menit "<<detik<<" detik "<<endl;
    cout<<endl;
}
