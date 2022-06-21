#include <iostream>
using namespace std;

void BiayaWarnet(int jam,int lama3,int lama2,int lama1,int menit){
    float detik,bayar;
    jam = lama3 * 3600;
    menit = 60 * lama2;
    detik = jam + menit + lama1;
    bayar = (detik / 50) * 50;
    cout<<"Harga Billing  = "<<bayar;
}

main()
{
    int jam, menit, j1, m1, d1, j2, m2, d2, lama1, lama2, lama3;

    cout<<"jAM MULAI : "<<endl;
    cout<<"Jam   = "; cin>>j1;
    cout<<"menit = "; cin>>m1;
    cout<<"detik = "; cin>>d1;
    cout<<endl;
    cout<<"JAM SELESAI : "<<endl;
    cout<<"Jam   = "; cin>>j2;
    cout<<"menit = "; cin>>m2;
    cout<<"detik = "; cin>>d2;
    cout<<endl;
    cout<<"Jam  MULAI  Pada Pukul = "<<j1<<":"<<m1<<":"<<d1<<" WIB"<<endl;
    cout<<"Jam SELESAI pada Pukul = "<<j2<<":"<<m2<<":"<<d2<<" WIB"<<endl;
    if ((d2-d1)<0){
        lama1=(60+d2)-d1;
    }
    else{
        lama1=d2-d1;
    }
    if ((m2-m1)<0){
        lama2=(60+m2)-m1;
    }
    else{
        lama2=m2-m1;
    }

    if ((j2-j1)<0){
        lama3=(24+j2)-j1;
    }
    else{
        lama3=j2-j1;
    }
    cout<<"LAMA RENTAL = "<<lama3<<":"<<lama2<<":"<<lama1<<" WIB \n";
    BiayaWarnet(jam,lama3,lama2,lama1,menit);
    cout<<endl;
    cout<<endl;

}
