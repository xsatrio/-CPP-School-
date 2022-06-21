//PROGRAM KONVERSI METER
#include <iostream>
using namespace std;

main()
{
    //DEKLARASI
    float m, cm, mili, inch, kaki, yard;

    cout<<"masukkan ukuran meter :"; cin>>m;

    //ALGORITMA
    mili = m * 1000;
    cm = m * 100;
    inch = mili / 25.4;
    kaki = cm / 30.48;
    yard = m / 0.9144;

    cout<<endl<<"hasil konversi dari "<<m<<" ke inchi, kaki, yard adalah"<<endl;
    cout<<endl<<"Inchi : "<<inch<<endl<<"Kaki : "<<kaki<<endl<<"Yard : "<<yard;
    cout<<endl;
}

