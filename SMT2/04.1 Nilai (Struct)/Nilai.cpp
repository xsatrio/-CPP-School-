#include <iostream>
using namespace std;

typedef struct{
    int NIM;
    string nama;
    float nilai_tugas;
    float nilai_UTS;
    float nilai_UAS;
    float nilai_Akhir;
    float nilai_Huruf;
    float kuis;
}Nilai;

int main(){
    Nilai n;

    cout<<"Masukkan Nama : "; getline(cin, n.nama);
    cout<<"Masukkan NIM : "; cin>>n.NIM;
    cout<<"Masukkan Nilai Kuis : "; cin>>n.kuis;
    cout<<"Masukkan Nilai Tugas : "; cin>>n.nilai_tugas;
    cout<<"Masukkan Nilai UTS : "; cin>>n.nilai_UTS;
    cout<<"Masukkan Nilai UAS : "; cin>>n.nilai_UAS;

    n.nilai_Akhir = 0.1 * n.nilai_tugas + 0.2 * n.kuis + 0.3 * n.nilai_UTS + 0.4 * n.nilai_UAS;

    cout<<"\n"<<"NIM : "<<n.NIM<<"\n"<<"Nama : "<<n.nama<<"\n";

    if (n.nilai_Akhir <= 40){
        cout<<"Nilai Akhir : E \n";
    }
    else if (n.nilai_Akhir <= 55){
        cout<<"Nilai Akhir : D \n";
    }
    else if (n.nilai_Akhir <= 70){
        cout<<"Nilai Akhir : C \n";
    }
    else if (n.nilai_Akhir <= 85){
        cout<<"Nilai Akhir : B \n";
    }
    else if (n.nilai_Akhir <= 100){
        cout<<"Nilai Akhir : A \n";
    }
    return 0;
}
