#include <iostream>
using namespace std;
const int Nmaks=100;
typedef int Arrayint[Nmaks];

void insertionSort(Arrayint A, int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = A[i];
		j = i - 1;
		while (key > A[j] && j >= 0)
		{
			A[j + 1] = A[j];
			--j;
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
    system("cls");
	cout<<"Masukkan jumlah elemen : "; cin>>N;
    read(A, N);
    cout<<endl;
    cout<<"Sebelum diurutkan : \n";
    printArray(A, N);
	insertionSort(A, N);
    cout<<"Setelah diurutkan : \n";
	printArray(A, N);
	cout<<endl;

	return 0;
}
