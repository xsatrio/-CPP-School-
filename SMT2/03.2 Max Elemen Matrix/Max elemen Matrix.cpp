#include <iostream>
using namespace std;
int x, y;

int main()
{
    int A[100][100];
    int Max;
    int x, y;
    int i, j;

    cout<<"Masukkan jumlah kolom : "; cin>>x;
    cout<<"Masukkan jumlah baris : "; cin>>y;

    for (i = 0; i < y; i++)
    {
        for (j = 0; j < x; j++)
        {
            cout<<"Input elemen A["<<i<<"]["<<j<<"] : "; cin>>A[i][j];
        }
    }

    Max = A[0][0];
    cout<<"\n";
    cout<<"Matriks \n";
    for (i = 0; i < y; i++)
    {
        for (j = 0; j < x; j++)
        {
            cout<<A[i][j]<<" ";
            if (A[i][j] > Max)
            {
                Max = A[i][j];
            }
        }
        cout<<"\n";
    }
    cout<<"Max : "<<Max<<endl;
}
