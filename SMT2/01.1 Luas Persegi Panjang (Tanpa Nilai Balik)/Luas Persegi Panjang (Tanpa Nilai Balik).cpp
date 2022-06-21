#include <iostream>
using namespace std;

void luas(float p,float l)
{
    float luas;

    luas=p*l;
    cout<<"Luas persegi panjang: "<<luas<<endl;
}

main(void)
{
    float p,l;

    cout<<"--------Menghitung luas persegi panjang--------"<<endl;
    cout<<"Masukan Panjang : "; cin>>p;
    cout<<"Masukan Lebar : "; cin>>l;
    cout<<endl;

    luas(p,l);
}
