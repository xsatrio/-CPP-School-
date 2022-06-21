#include <iostream>
#include <iomanip>
using namespace std;

typedef struct
{
	int hh;
	int mm;
	int ss;
} Time;

int main()
{
    //DEKLARASI
	Time time;

	cout << "Masukkan jam (hh) : "; cin >> time.hh;
	cout << "Masukkan menit (mm) : "; cin >> time.mm;
	cout << "Masukkan detik (ss) : "; cin >> time.ss;

	if (time.ss + 1 < 60)
	{
		time.ss = time.ss + 1;
	}
	else
	{
		time.ss = 0;

		if (time.mm + 1 < 60)
        {
			time.mm = time.mm + 1;
		}
		else
		{
			time.mm = 0;

			if (time.hh + 1 < 24)
			{
				time.hh = time.hh + 1;
			}
			else
			{
				time.hh = 0;
			}
		}
	}

	cout << "Jam yang baru ";
	cout << setw(2) << setfill('0') << time.hh;
	cout << ':';
	cout << setw(2) << setfill('0') << time.mm;
	cout << ':';
	cout << setw(2) << setfill('0') << time.ss;
	cout << endl;

}
