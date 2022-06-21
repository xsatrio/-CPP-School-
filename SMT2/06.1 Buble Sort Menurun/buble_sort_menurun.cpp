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
  	cout<<"ALGORITMA BUBBLE SORT MENURUN\n";
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

void tampil(){
    for (int i=0;i<n;i++){
        cout<<"["<<data[i]<<"] ";
	}
	cout<<endl;
}

void tukar (int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void input(){
    cout << " Masukkan Banyak Data : "; cin >> n;
    cout << endl;

    for(int i = 0; i < n; i++){
        cout << " Data ke " << i + 1 << " : ";
        cin >> data[i];
    }
}

void bubble_sort(){
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(data[i] < data[j]){
                    tukar(&data[i], &data[j]);
            }
        }
        tampil();
    }
}
