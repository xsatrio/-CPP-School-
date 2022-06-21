#include <iostream>
using namespace std;

float R_Elemen(float rerata)
{
    float sum,I,E,x;
    cout<<"-------------------Program Rata Rata-------------------";
    cout<<endl;
    cout<<"Masukkan Jumlah Elemen : "; cin>>E;

    sum=0;
    for (I=1; I<=E; I++)
    {
        cout<<"Masukkan datanya ke "<<I<<" : "; cin>>x;
        sum = sum + x;
    }
    rerata=sum/E;
    return rerata;
}

main()
{
    int I;
    float E,rerata;
    char jawab;

    do
    {
        rerata=R_Elemen(E);
        cout<<endl;
        cout<<"Nilai Rata-Rata = "<<rerata<<endl;
        cout<<endl;
        cout<<"Akhiri Program [y/n]?"; cin>>jawab;
        cout<<endl;
    }
    while(jawab!= 'y' && 'Y');
    cout<<"Program selesai bye..."<<endl;
}
