#include <iostream>;
using namespace std;

main()
{
    char nakar[50];
    float pajak,gapok,tunjangan,gaber;
    const float pajaktunj = 0.2;
    const float pajakgapok = 0.15;

    cout<<"Masukkan nama karyawan : "; cin>>nakar;
    cout<<"Masukkan jumlah gaji : "; cin>>gapok;

    tunjangan = pajaktunj * gapok;
    pajak = pajakgapok * (gapok+tunjangan);
    gaber = gapok + tunjangan - pajak;

    cout<<endl<<"Nama Karyawan : "<<nakar;
    cout<<endl<<"Hasil Gaji : "<<gaber<<endl;
}
