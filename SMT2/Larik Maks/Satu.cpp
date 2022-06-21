#include<iostream>
using namespace std;
const int MAKS=10;

void InputLarik(int L[], int N);
void OutputLarik(int L[], int N);

int main()
{
    int Larik[MAKS];
    int Maksimum, i, n;

    cout<<"Masukkkan Jumlah Data :"; cin>>n;
    cout<<endl;
    Maksimum = Larik[0];

    if (n > 10)
    {
        cout<<"Maksimal 10 data \n";
    }
    else
    {
        InputLarik(Larik,n);
        OutputLarik(Larik,n);
    }
}


void InputLarik(int L[], int N)
{
    int j;

    {
        for(j = 0; j < N; j++)
        {
            cout<<"Masukkan Data : "; cin>>L[j];
        }
    }
}

void OutputLarik(int L[], int N)
{
    int i,Max;

    Max = 0;
    for (i = 0; i < N; i++)
    {
        if (Max < L[i])
        {
            Max = L[i];
;        }
    }
    cout<<"\nNilai Maksimumnya adalah : "<<Max<<endl;
}
