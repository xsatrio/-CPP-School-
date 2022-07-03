#include <iostream>
using namespace std;
const int Nmaks=50;
typedef int Arrayint[Nmaks];

void insertionSort(Arrayint A, int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > key)
		{
			A[j + 1] = A[j];
			j = j - 1;
		}
		A[j + 1] = key;
	}
}

void printArray(Arrayint A, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << A[i] << " ";
	cout << endl;
}

void read(Arrayint A, int n){
    int i;

    for(i=0; i<n; i++){
        cout<<"Masukkan Elemen : "; cin>>A[i];
    }
}

int main()
{
	Arrayint A;
	int N;

	cout<<"Masukkan jumlah elemen : "; cin>>N;
    read(A, N);
    cout<<endl;
	insertionSort(A, N);
	printArray(A, N);

	return 0;
}
