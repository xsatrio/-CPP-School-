//PROGRAM DISKON
#include <iostream>;
using namespace std;

main()
{
    //DEKLARASI
    int harga,total,diskon;
    cout<<"Program Diskon"<<endl;
    cout<<"Masukan Jumlah Uang : "; cin>>harga;

    //ALGORITMA
    if (harga < 10000)
    {
        diskon = harga * 0;
        total = harga - diskon;
    }
    else if (harga >= 100000)
    {
        diskon = harga * 20/100;
        total = harga - diskon;
    }
    else if ((harga >= 50000) && (harga < 100000))
    {
        diskon = harga * 15/100;
        total = harga - diskon;
    }
    else if ((harga >= 10000) && (harga < 50000))
    {
        diskon = harga * 10/100;
        total = harga - diskon;
    }

    cout<<endl;
    cout<<"Diskon : "<<diskon<<endl;
    cout<<"Total Harga : "<<total<<endl;
}
