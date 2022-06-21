#include <iostream>
using namespace std;

float K_Lingkaran(float radius){
    float K;
    K = 2 * 3.14 * radius;
    return K;
}

main(){
    int R;
    float Keliling;
    cout << "nilai jari-jari: ";cin >> R;
    Keliling = K_Lingkaran(R);
    cout<<"Keliling Lingkaran="<<Keliling;
}
