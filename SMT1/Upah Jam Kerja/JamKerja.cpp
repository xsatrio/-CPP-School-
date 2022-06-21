#include <iostream>;
using namespace std;

main()
{
    //DEKLARASI
    int jjk,lembur,upahtotal;
    string nama;

    //ALGORITMA
    cout<<"Nama : "; cin>>nama;
    cout<<"Jam Kerja : "; cin>>jjk;
    cout<<endl;
    if (jjk<48)
    {
        upahtotal=jjk*2000;
        cout<<"Nama : "<<nama<<endl<<"Gaji Pokok : "<<upahtotal<<endl;
    }
    else
    {
        lembur=jjk-48;
        upahtotal=48*2000 + lembur*3000;
        cout<<"Nama : "<<nama<<endl<<"Jumlah Lembur : "<<lembur<<" jam"<<endl<<"Gaji Pokok : "<<upahtotal<<endl;
    }
}
