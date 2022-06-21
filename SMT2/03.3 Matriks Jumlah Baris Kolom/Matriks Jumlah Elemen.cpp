#include <iostream>
using namespace std;

int main()
{
    int A[100][100];
    int Min, Max;
    int x,y;
    int sum, baris, i, j;

    cout<<"Masukkan jumlah baris : "; cin>>x;
    cout<<"Masukkan jumlah kolom : "; cin>>y;
    cout<<endl;

    for(i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            cout<<"Input elemen ["<<i<<"]["<<j<<"] : "; cin>>A[i][j];
        }
    }

    cout<<"\nMatriks";
    cout<<endl;
    for(i = 0; i < x; i++)
    {
    sum = 0;
        for(j = 0; j < y; j++)
        {
            sum = sum + A[i][j];
            cout<<A[i][j]<<"   ";
        }
        cout<<"  "<<sum<<" ";
        cout<<endl;
    }

    for(i = 0; i < y; i++)
    {
        baris = 0;
        for(j=0; j < x; j++)
        {
            baris = baris + A[j][i];
        }
        cout<<baris<<"  ";
    }
    cout<<endl;
    return 0;
}
