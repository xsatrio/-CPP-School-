#include <iostream>
using namespace std;

int HitungMinimum(int jumlah, int minimum)
{
    int i = 1;
    int array[jumlah];
    cout<<"Masukkan " << jumlah << " Data \n";

    for (i = 0; i < jumlah; i ++)
    {
        cout << "Input Data A[" <<(i+1) <<"] : ";
        cin >> array[i];
    }

    minimum = array[0];
    for(i = 0; i < jumlah; i++)
    {
        if (array[i] < minimum)
        {
        minimum = array[i];
        }
    }
    return minimum;
}

int main()
{
    int minimum, jumlah, i = 1;

    cout<<"Masukan banyaknya elemen (maks 5):"; cin >> jumlah;
    cout<<endl;
    minimum = HitungMinimum(jumlah, minimum);
    cout<<endl;
    cout<<"Nilai Minimum = " << minimum;
}

