#include <iostream>
using namespace std;

typedef struct
{
     short NIP;
     string nama, alamat_jabatan, agama, unit_kerja;
     int tanggal_lahir, tanggal_mulai_kerja;
}Biodata;

typedef struct
{
    string jalan, kota;
    int kode_pos;
}Tinggal;

typedef struct
{
    int tanggal, bulan, tahun;
}Tanggal;

main()
{
    int Karyawan[5];
    int i,x,y;
    cout<<"-------------------\n";
    cout<<"Masukkan Jumlah Karyawan : "; cin>>y;
    cout<<"\n-------------------";
    cout<<"\nInput "<<y<<" Karyawan \n";
    cout<<"-------------------\n";

    Biodata B[y];
    Tinggal T[y];
    Tanggal D;

    cout<<"\nTanggal Input\n";
    cout<<"\nMasukkan Tanggal : "; cin>>D.tanggal;
    cout<<"Masukkan Bulan : "; cin>>D.bulan;
    cout<<"Masukkan Tahun : "; cin>>D.tahun;

    for (i=0; i<y; i++)
    {
        cout<<"\n--------------------";
        cout<<"\nBiodata Karyawan "<<i + 1<<"\n\n";
        cout<<"Masukkan NIP : "; cin >> B[i].NIP;
        cout<<"Masukkan Nama : "; getline(cin>> ws, B[i].nama);
        cout<<"Masukkan Alamat Jabatan : "; getline(cin>> ws, B[i].alamat_jabatan);
        cout<<"Masukkan Agama : "; getline(cin>> ws, B[i].agama);
        cout<<"Masukkan Tanggal Lahir: "; cin >> B[i].tanggal_lahir;
        cout<<"Masukkan Tanggal Mulai Kerja : "; cin >> B[i].tanggal_mulai_kerja;
        cout<<"Masukkan Unit Kerja : "; getline(cin >> ws, B[i].unit_kerja);

        cout<<"\nTempat Tinggal Karyawan "<<i + 1<<"\n";
        cout<<"Masukkan Jalan : "; getline(cin>> ws,T[i].jalan);
        cout<<"Masukkan Kode Pos : "; cin >> T[i].kode_pos;
        cout<<"Masukkan Kota : "; cin >> T[i].kota;
    }

    cout<<"\n\nTanggal : "<<D.tanggal<<"-"<<D.bulan<<"-"<<D.tahun;


    for (x=0; x<y; x++)
    {
        cout<<"\n===================";
        cout<<"\nBiodata Karyawan "<<x + 1<<"\n\n";
        cout<<"NIP : "<<B[x].NIP<<endl;
        cout<<"Nama : "<<B[x].nama<<endl;
        cout<<"Alamat Jabatan : "<<B[x].alamat_jabatan<<endl;
        cout<<"Agama : "<<B[x].agama<<endl;
        cout<<"Tanggal Lahir: "<<B[x].tanggal_lahir<<endl;
        cout<<"Tanggal Mulai Kerja : "<<B[x].tanggal_mulai_kerja<<endl;
        cout<<"Unit Kerja : "<<B[x].unit_kerja<<endl;

        cout<<"\nTempat Tinggal Karyawan "<<x + 1<<"\n";
        cout<<"Jalan : "<<T[x].jalan<<endl;
        cout<<"Kode Pos : "<<T[x].kode_pos<<endl;
        cout<<"Kota : "<<T[x].kota<<endl;
    }
    return 0;
}
