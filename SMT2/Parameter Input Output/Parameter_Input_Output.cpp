#include <iostream>
using namespace std;

void K_Lingkaran(float *X){
    *X = 2 * 3.14 * (*X);
}

main(){
    float R;

    cout << "nilai jari-jari: ";
    cin >> R;
    K_Lingkaran(&R);
    cout <<"Keliling Lingkaran=" << R;
}
