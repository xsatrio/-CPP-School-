#include <iostream>
using namespace std;

main()
{
    //DEKLARASI
    int nomormenu,jumlah;

    //ALGORITMA
    jumlah=-1;
    do
    {
        cout<<"menu program"<<endl;
        cout<<"1. Input"<<endl;
        cout<<"2. Hapus"<<endl;
        cout<<"3. Ubah"<<endl;
        cout<<"4. Cetak"<<endl;
        cout<<"5. keluar"<<endl;
        cout<<"INputkan pilihan menu";cin>>nomormenu;

        jumlah=jumlah+1;
        switch (nomormenu)
        {
            case 1: {cout<<"Anda Memilih nomor 1"<<endl; break;}
            case 2: {cout<<"Anda Memilih nomor 2"<<endl; break;}
            case 3: {cout<<"Anda Memilih nomor 3"<<endl; break;}
            case 4: {cout<<"Anda Memilih nomor 4"<<endl; break;}
            case 5: {cout<<"Anda Memilih nomor 5"<<endl; break;}
        }
    }
    while(nomormenu!=5);
    cout<<jumlah;
}

