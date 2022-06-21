#include<iostream>
using namespace std;


float rata(float hasil, float j_e)
{
    float res;
    res = hasil / j_e;
    cout << "Hasil Rata-rata = ";
    return res;
}

int nilai_min(int j)
{
    int minimum = NULL, hasil = 0;
    float arr[j];
        for (int i = 0; i < j; i++)
        {
            cout << "Input Data A[" << i+1 << "] : ";
            cin >> arr[i];
            hasil = arr[i] + hasil;
            if (minimum > arr[i] || minimum == NULL)
            {
                minimum = arr[i];
            }
        }
        cout << rata(hasil, j);
        cout<<endl;
        cout << "Nilai minimumnya adalah : ";
    return minimum;
 }

int main()
{
    int j;
    cout << "Inputkan jumlah element : ";
    cin >> j;
    cout << nilai_min(j);
    return 0;
}
