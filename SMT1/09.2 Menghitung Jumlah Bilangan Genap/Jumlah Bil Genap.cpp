//PROGRAM MENGHITUNG BIL GENAP
#include <iostream>
using namespace std;

main()
{
    int jumlah,angka;

    jumlah=0;
    do
    {
        cout<<"Masukkan bilangan : "; cin>>angka;
        if (angka % 2 == 0)
        {
            jumlah=jumlah+1;
        }
        else
        {
            jumlah=jumlah+0;
        }
    }
    while(angka!=-1);

    cout<<endl;
    cout<<"Jumlah bilangan genap : "<<jumlah<<endl;
}
