#include <iostream>
using namespace std;

main()
{
    int nim;
    string prodi;
    string nama;
    long int upeb,ukem,cicil,tb;

    cout<<"Masukan Nama : "; cin>>nama;
    cout<<"Masukan NIM : "; cin>>nim;
    cout<<"Masukan Program Studi : "; cin>>prodi;
    cout<<"Masukan cicilan 1 : "; cin>>cicil;
    cout<<"Masukan Uang Pembangunan : "; cin>>upeb;
    cout<<"Masukan Uang Kemahasiswaan : "; cin>>ukem;

    tb=cicil+upeb+ukem;

    cout<<endl<<"Nama : "<<nama<<endl;
    cout<<"NIM : "<<nim<<endl;
    cout<<"Total : "<<tb<<endl;
}
