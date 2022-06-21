//PROGRAM SELISIH HARI
#include <iostream>
using namespace std;

main()
{
    //DEKLARASI
	typedef struct
	{
		int dd;
		int mm;
		int yy;
	} Date;

	Date day1, day2;
	int total, one, two;

    cout<<"Harap masukkan inputan dengan benar"<<endl;

    cout<<"Tanggal sebelumnya : "; cin>>day1.dd;
    cout<<"Bulan sebelumnya : "; cin>>day1.mm;
    cout<<"Tahun sebelumnya : "; cin>>day1.yy;
    cout<<endl;

    cout<<"Tanggal sekarang : "; cin>>day2.dd;
    cout<<"Bulan sekarang : "; cin>>day2.mm;
    cout<<"Tahun sekarang : "; cin>>day2.yy;
    cout<<endl;

    //ALGORITMA
    one = (day1.yy * 365) + (day1.mm * 30) + day1.dd;
    two = (day2.yy * 365) + (day2.mm * 30) + day2.dd;
    if (two > one)
    {
        total = two - one;
        cout << total << " total hari\n";
    }
    else
    cout<<"Salah Input";

}
