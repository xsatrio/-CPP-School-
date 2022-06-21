#include <iostream>
using namespace std;

int main()
{
    //DEKLARASI
    int a,b,c;

    cout<<"Masukkan bilangan A : "; cin>>a;
    cout<<"Masukkan bilangan B : "; cin>>b;
    cout<<"Masukkan bilangan C : "; cin>>c;

    if (a>b && a>c)
    {
        cout<<"Bilangan Terbesar adalah A : "<<a<<endl;
    }
    else if (b>a && b>c)
    {
        cout<<"Bilangan Terbesar adalah B : "<<b<<endl;
    }
    else
    {
        cout<<"Bilangan Terbesar adalah C : "<<c<<endl;
    }
}
