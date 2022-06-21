#include <iostream>
using namespace std;
const int NBaris = 3;
const int NKolom = 3;

int main()
{
    int A[NBaris][NKolom];
    int B[NBaris][NKolom];
    int C[NBaris][NKolom];
    int i,j;

    for (i = 0; i < NBaris; i++)
    {
        for (j = 0; j < NKolom; j++)
        {
            cout<<"Input elemen A["<<i<<"]["<<j<<"] : "; cin>>A[i][j];
        }
    }
    cout<<"\n";
    for (i = 0; i < NBaris; i++)
    {
        for (j = 0; j < NKolom; j++)
        {
            cout<<"Input elemen B["<<i<<"]["<<j<<"] : "; cin>>B[i][j];
        }
    }
    cout<<"\n";
    for (i = 0; i < NBaris; i++)
    {
        for (j = 0; j < NKolom; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    cout<<"Matriks A : \n";
    for (i = 0; i < NBaris; i++)
    {
        for (j = 0; j < NKolom; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Matriks B : \n";
    for (i = 0; i < NBaris; i++)
    {
        for (j = 0; j < NKolom; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Matriks C = Matriks A - Matriks B : \n";
    for (i = 0; i < NBaris; i++)
    {
        for (j = 0; j < NKolom; j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
