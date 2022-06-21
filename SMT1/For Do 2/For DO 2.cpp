
#include <iostream>
using namespace std;

main()
{
    int I,N,sum;

    cout<<"Masukkan Banyaknya Pengulangan : "; cin>>N;
    cout<<endl;
    sum=0;

    for (I=1; I<=N; I++)
    {
        sum = sum + I;
        cout<<I<<" Sum = "<<sum<<endl;
    }
    cout<<"Hasilnya adalah : "<<sum<<endl;
}


