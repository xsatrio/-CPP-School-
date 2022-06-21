#include <iostream>;
using namespace std;

main()
{
    //DEKLARASI
    int provinsi;

    //ALGORITMA
    cout<<"==============="<<endl;
    cout<<"  DAFTAR KOTA"<<endl;
    cout<<"==============="<<endl;
    cout<<"1. Serang"<<endl;
    cout<<"2. Bandung"<<endl;
    cout<<"3. Semarang"<<endl;
    cout<<"4. Yogyakarta"<<endl;
    cout<<"5. Surabaya"<<endl;
    cout<<endl;
    cout<<"Masukkan Nomor Kota :"; cin>>provinsi;

    switch(provinsi)
    {
        case 1 : {cout<<endl<<"Provinsi Serang adalah Banten"<<endl; break;}
        case 2 : {cout<<endl<<"Provinsi Bandung adalah Jawa Barat"<<endl; break;}
        case 3 : {cout<<endl<<"Provinsi Semarang adalah Jawa Tengah"<<endl; break;}
        case 4 : {cout<<endl<<"Provinsi Yogyakarta dalah Daerah Istimewa Yogyakarta"<<endl; break;}
        case 5 : {cout<<endl<<"Provinsi Surabaya adalah Jawa Timur"<<endl; break;}
        default : {cout<<endl<<"Inputan Salah"<<endl;}
    }

}
