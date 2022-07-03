#include<iostream>
using namespace std;

main(){
    int x=8,y;
    int *xPtr;
    xPtr=&x;
    y=*xPtr;

    cout<<"nilai x = "<<x<<endl;
    cout<<"Alamat x = "<<&x<<endl;
    cout<<"nilai xPtr = "<<xPtr<<endl;
    cout<<"Alamat xPtr = "<<&xPtr<<endl;
    cout<<"nilai yang disimpan pada alamat = "<<xPtr<<" adalah "<<y<<endl;
}
