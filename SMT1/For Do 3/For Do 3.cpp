
#include <iostream>
using namespace std;

main()
{
    int I;
    float N,sum,x,rerata;

    cout<<"Masukkan Banyaknya Pengulangan : "; cin>>N;
    cout<<endl;
    sum=0;

    for (I=1; I<=N; I++)
    {
        cout<<"Masukkan datanya ke "<<I<<" : "; cin>>x;
        sum = sum + x;
    }
    rerata=sum/N;
    cout<<"Hasilnya adalah : "<<rerata<<endl;
}



