#include <iostream>

using namespace std;

int main()
{
	int tahun,bulan,minggu,hari;

	cout<<"Masukkan jumlah hari kerja : "; cin>>hari;

	tahun = hari / 365;
	hari = hari % 365;

	bulan = hari / 30;
	hari = hari % 30;

	minggu = hari / 7;
	hari = hari % 7;

	cout<<tahun<<" tahun, ";
	cout<<bulan<<" bulan, ";
	cout<<minggu<<" minggu, ";
	cout<<hari<<" hari."<<endl;

}
