//PROGRAM GAJI GOLONGAN
#include <iostream>
using namespace std;

main()
{
    //DEKLARASI
    const int lembur = 3000;
    const int A = 4000;
    const int B = 5000;
    const int C = 6000;
    const int D = 7500;

    string nama;
    char gol;
    char jawab;
    float upah_perjam,upah;
    long int total_lembur,jam_kerja,sisa_lembur;


    //ALGORITMA
    do
    {
    cout<<endl;
    cout<<"##  Program Menghitung Gaji Karyawan  ##"<<endl;
    cout<<"========================================"<<endl;
    cout<<endl;
    cout<<"Nama : ";cin>>nama;
    cout<<"Golongan : ";cin>>gol;
    cout<<"Total Jam Kerja : ";cin>>jam_kerja;

    if (gol == 'A' || gol == 'a')
        {
            if (jam_kerja <= 48)
        {
            upah = jam_kerja * 48;
        }
        else
        {
            sisa_lembur = jam_kerja - 48;
            upah = 48 * A + sisa_lembur * lembur;
        }
            cout<<endl;
            cout<<"Nama : "<<nama<<endl;
            cout<<"Golongan : "<<gol<<endl;
            cout<<"Total Upah : "<<upah<<endl;
        }
    else if (gol == 'B' || gol == 'b')
        {
            if (jam_kerja <= 48)
        {
            upah = jam_kerja * 48;
        }
        else
        {
            sisa_lembur = jam_kerja - 48;
            upah = (48 * B) + (sisa_lembur * lembur);
        }
            cout<<endl;
            cout<<"Nama : "<<nama<<endl;
            cout<<"Golongan : "<<gol<<endl;
            cout<<"Total Upah : "<<upah<<endl;
        }
    else if (gol == 'C' || gol == 'c')
        {
            if (jam_kerja <= 48)
        {
            upah = jam_kerja * 48;
        }
        else
        {
            sisa_lembur = jam_kerja - 48;
            upah = 48 * C + sisa_lembur * lembur;
        }
            cout<<endl;
            cout<<"Nama : "<<nama<<endl;
            cout<<"Golongan : "<<gol<<endl;
            cout<<"Total Upah : "<<upah<<endl;
        }
    else if (gol == 'D' || gol == 'd')
        {
            if (jam_kerja <= 48)
        {
            upah = jam_kerja * 48;
        }
        else
        {
            sisa_lembur = jam_kerja - 48;
            upah = 48 * D + sisa_lembur * lembur;
        }
            cout<<endl;
            cout<<"Nama : "<<nama<<endl;
            cout<<"Golongan : "<<gol<<endl;
            cout<<"Total Upah : "<<upah<<endl;
        }
    else
        {
            cout<<endl;
            cout<<"Salah Input Golongan";
        }
    cout<<endl;
    cout<<"Apakah ingin mengulangi untuk karyawan yang lain Y/N : "; cin>>jawab;
    }
    while(jawab!='t' && 'T');
}
