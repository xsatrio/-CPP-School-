#include <iostream>
using namespace std;

main()
{
    float DEP,bulan;
    float minggu,hari;

    cout<<"Masukkan Target Wallet DEP : "; cin>>DEP;

    DEP = DEP / 50;
    bulan = DEP / 4;
    minggu = DEP;
    hari = DEP * 7;

    cout<<endl;
    cout<<"Tersisa "<<bulan<<" bulan untuk WD"<<endl;
    cout<<"Tersisa "<<minggu<<" minggu untuk WD"<<endl;
    cout<<"Tersisa "<<hari<<" hari untuk WD"<<endl;
}
