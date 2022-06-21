#include <iostream>
using namespace std;
int data[10], data2[10];
int n;

void tukar (int a,int b);
void input();
void tampil();
void bubble_sort();

int main()
  {
  	cout<<"ALGORITMA BUBBLE SORT MENAIK\n";
  	cout<<"----------------------\n";
	input();
	cout<<"\nData Bubble Sort\n";
	tampil();
	cout<<endl;
	cout<<"Proses Bubble Sort\n";
	bubble_sort();
	cout<<endl;
	cout<<"Hasil Bubble Sort\n";
	tampil();
  }

void tukar (int a,int b){
    int t;
    t=data[b];
    data[b]=data[a];
    data[a]=t;
}

void input(){
    cout<<"Masukan Jumlah Data(Maks 10) = "; cin>>n;
    cout<<endl;

    for (int i=0;i<n;i++){
    	cout<<"Masukan Data Ke-"<<i+1<<" = ";
    	cin>>data[i];

    	data2[i]=data[i];
	}
}

void tampil(){
	for (int i=0;i<n;i++){
	     cout<<"["<<data[i]<<"] ";
	}
	cout<<endl;
}

void bubble_sort(){
	for (int i=1; i<n;i++){
		for (int j=n-1; j>=i;j--){
			if (data[j]<data[j-1]){
				tukar(j,j-1);
			}
		}
		tampil();
	}
}
