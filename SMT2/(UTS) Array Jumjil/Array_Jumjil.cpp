#include<iostream>
using namespace std;

void jumjil(int e)
{
    int i = 1;
    int data[e];
    int jumlah(0);

    for (i = 0; i < e; i++)
    {
    cout<<"Masukkan elemen ke ["<<i<<"] : "; cin>>data[i];
    }

    for (i = 0; i < e; i++)
    {
        if (data[i] % 2 == 0){}
        else
        {
            jumlah = jumlah + data[i];
        }
    }
    cout<<"\n jumlah ganjil : "<<jumlah;
}

main()
{
    int elemen;
    cout<<"Masukkan jumlah elemen : "; cin>>elemen;
    cout<<endl;
    jumjil(elemen);
}
