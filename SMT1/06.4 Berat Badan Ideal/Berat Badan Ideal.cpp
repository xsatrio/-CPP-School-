//PROGRAM BERAT BADAN IDEAL
#include <iostream>
using namespace std;

main()
{
    //DEKLARASI
	float tinggi, before, ideal;

	cout<<"Tinggi badan (cm) : "; cin>>tinggi;

    //ALGORITMA
	before = tinggi - 100;
	ideal = before - (before * 0.1);

	cout<<"Berat badan ideal : "<<ideal<<" kg.";
	cout<<endl;
}
