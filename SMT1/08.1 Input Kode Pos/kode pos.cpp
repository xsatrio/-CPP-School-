//PROGRAM KODE POS
#include <iostream>
using namespace std;

main()
{
    //DEKLARAI
    int kota;

    //ALGORITMA
    cout<<"==================="<<endl;
    cout<<"    DAFTAR KOTA"<<endl;
    cout<<"==================="<<endl;
    cout<<"1. Padang"<<endl;
    cout<<"2. Bandung"<<endl;
    cout<<"3. Solo"<<endl;
    cout<<"4. Denpasar"<<endl;
    cout<<"5. Palu"<<endl;
    cout<<"Masukkan nomor Kota : ";cin>>kota;

    switch(kota)
    {
        case 1: {cout<<endl<<"Kode pos Padang Adalah 25000"<<endl; break;}
        case 2: {cout<<endl<<"Kode pos Bandung Adalah 40100"<<endl; break;}
        case 3: {cout<<endl<<"Kode pos Solo Adalah 51000"<<endl; break;}
        case 4: {cout<<endl<<"Kode pos Denpasar Adalah 72000"<<endl; break;}
        case 5: {cout<<endl<<"Kode pos Palu Adalah 92300"<<endl; break;}
        default :{cout<<endl<<"inputan salah"<<endl;}
    }
}
