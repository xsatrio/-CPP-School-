//PROGRAM KONVERSI JARAK CM
#include <iostream>

using namespace std;

main()
{
    //DEKLARASI
	long int km, m, cm;

	cout << "Masukkan jarak (cm) : ";
	cin >> cm;
    //ALGORITMA
	km = cm / 100000;
	cm = cm % 100000;

	m = cm / 100;
	cm = cm % 100;

	cout << km << " km, " << m << " m, " << cm << " cm.";
	cout << endl;
}
