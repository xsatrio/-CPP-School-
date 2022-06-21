//PROGRAM HARI KERJA
#include <iostream>

using namespace std;

int main()
{
    //DEKLARASI
	int years, months, weeks, days;

	cout << "Masukkan jumlah hari kerja : ";
	cin >> days;

    //ALGORITMA
	years = days / 365;
	days = days % 365;

	months = days / 30;
	days = days % 30;

	weeks = days / 7;
	days = days % 7;

	cout << years << " tahun, ";
	cout << months << " bulan, ";
	cout << weeks << " minggu, ";
	cout << days << " hari." << endl;
	cout<<endl;

}
