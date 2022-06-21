#include <iostream>
using namespace std;
const int MAX = 10;

void InputArray(float A[], float N)
{
    int j;
    for (j=0; j<N; j++)
    {
    cout <<"input data A["<<j<<"] = ";
    cin >> A[j];
    }
}

float HitungRataRata(float A[], float N)
{
    int j, jumlah = 0;
    for (j=0; j<N; j++)
    {
    jumlah = jumlah + A[j];
    }
return (jumlah/N);
}

int main()
{
    float Arr[MAX];
    float n;
    float rata_rata;
    cout <<"Masukan banyaknya elemen (maks 10):";cin >> n;
    InputArray(Arr, n);
    cout <<endl;
    rata_rata = HitungRataRata(Arr, n);cout <<"Nilai rata-rata = "<<rata_rata;return 0;
}
