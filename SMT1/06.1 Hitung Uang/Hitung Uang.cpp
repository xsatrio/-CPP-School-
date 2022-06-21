//PROGRAM PECAHAN UANG
#include <iostream>
using namespace std;

main()
{
    //DEKLARASI
        int uang,seribu,seratus,lp,dpl,cek;

        cout<<"Membaca Nilai Uang Rupiah Kelipatan 25 dan Menentukan Nilai Tukaran Pecahan Uang Rupiah"<<endl;
        cout<<"Input Jumlah Uang : "; cin>>uang;
    //ALGORTIMA
    cek = uang%25;
    if(cek==0)
    {
        seribu = uang / 1000;
        uang = uang % 1000;
        seratus = uang / 100;
        uang = uang % 100;
        lp = uang / 50;
        uang = uang % 50;
        dpl = uang / 25;
        cout<<seribu<<" buah pecahan Rp 1000, "<<seratus<<" buah pecahan Rp 100, "<<lp<<" buah pecahan Rp 50, dan "<<dpl<<" buah pecahan Rp 25 "<<endl;
    }
    else
    {
        cout<<"Maaf uang yang anda inputkan bukan kelipatan 25"<<endl;
    }
}
