//PROGRAM KABISAT
#include<iostream>
using namespace std;

main()
{
    //DEKLARASI
    int bulan,tahun;

    //ALGORITMA
    cout<<"Masukkan bulan : ";cin>>bulan;
    cout<<"Masukkan Tahun : ";cin>>tahun;

    switch(bulan)
    {
        case 1 : case 3: case 5 : case 7 : case 8 : case 10 : case 12 :
        {
            cout<<"31 Hari"; break;
        }
        case 2 : {
                    if (tahun%400==0)
                    {
                        cout<<"28 Hari/Kabisat"; break;
                    }
                    else if (tahun%100==0)
                    {
                        cout<<"28 Hari/Kabisat"; break;
                    }
                    else if (tahun%4==0)
                    {
                        cout<<"29 Hari"; break;
                    }
                    else
                    {
                        cout<<"28 Hari/Kabisat"; break;
                    }
                 }
        case 4 : case 6 : case 9 : case 11 :
        {
            cout<<"30 Hari"; break;
        }
        default : {cout<<"inputan Salah";}
    }
}
