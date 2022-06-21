#include <iostream>
#include <string>
using namespace std;

typedef struct {
  int akumulasi[5];
  int hargaBarang[5] = {500,350,550,750,450};  
  int totalhasilTerjual[5] = {0,0,0,0,0};
  int totalhasilPramuniaga = 0;
} BARANG;
typedef struct {
  BARANG Bb;
} PRAMUNIAGA;
int main(){
  PRAMUNIAGA p1, p2, p3, p4, p5, p6, p7, p8, p9, p10;
  BARANG barang;
  for (int i = 0; i < 10; i++){
    cout << "Inputkan barang yang terjual Pramuniaga - " << i+1 << endl;
    for (int j = 0; j < 5; j++){
      cout << "Barang ke - " << j + 1 << " yang terjual : ";
      if(i == 0){ 
        cin >> p1.Bb.akumulasi[j];  
        barang.totalhasilTerjual[j] += p1.Bb.akumulasi[j]  * barang.hargaBarang[j];
        p1.Bb.totalhasilPramuniaga += p1.Bb.akumulasi[j] * barang.hargaBarang[j];
      };
      if(i == 1){
        cin >> p2.Bb.akumulasi[j];  
        barang.totalhasilTerjual[j] += p2.Bb.akumulasi[j]  * barang.hargaBarang[j];
        p2.Bb.totalhasilPramuniaga += p2.Bb.akumulasi[j] * barang.hargaBarang[j];   
      }; 
      if(i == 2){ 
        cin >> p3.Bb.akumulasi[j];  
        barang.totalhasilTerjual[j] += p3.Bb.akumulasi[j]  * barang.hargaBarang[j];
        p3.Bb.totalhasilPramuniaga += p3.Bb.akumulasi[j] * barang.hargaBarang[j];   
      }; 
      if(i == 3){ 
        cin >> p4.Bb.akumulasi[j];  
        barang.totalhasilTerjual[j] += p4.Bb.akumulasi[j]  * barang.hargaBarang[j];
        p4.Bb.totalhasilPramuniaga += p4.Bb.akumulasi[j] * barang.hargaBarang[j];   
      }; 
      if(i == 4){
        cin >> p5.Bb.akumulasi[j];  
        barang.totalhasilTerjual[j] += p5.Bb.akumulasi[j]  * barang.hargaBarang[j];
        p5.Bb.totalhasilPramuniaga += p5.Bb.akumulasi[j] * barang.hargaBarang[j];   
      }; 
      if(i == 5){
        cin >> p6.Bb.akumulasi[j];  
        barang.totalhasilTerjual[j] += p6.Bb.akumulasi[j]  * barang.hargaBarang[j];
        p6.Bb.totalhasilPramuniaga += p6.Bb.akumulasi[j] * barang.hargaBarang[j];   
      }; 
      if(i == 6){
        cin >> p7.Bb.akumulasi[j];  
        barang.totalhasilTerjual[j] += p7.Bb.akumulasi[j]  * barang.hargaBarang[j];
        p7.Bb.totalhasilPramuniaga += p7.Bb.akumulasi[j] * barang.hargaBarang[j];   
      }; 
      if(i == 7){
        cin >> p8.Bb.akumulasi[j];  
        barang.totalhasilTerjual[j] += p8.Bb.akumulasi[j]  * barang.hargaBarang[j];
        p8.Bb.totalhasilPramuniaga += p8.Bb.akumulasi[j] * barang.hargaBarang[j];   
      }; 
      if(i == 8){
        cin >> p9.Bb.akumulasi[j];  
         barang.totalhasilTerjual[j] += p9.Bb.akumulasi[j]  * barang.hargaBarang[j];
         p9.Bb.totalhasilPramuniaga += p9.Bb.akumulasi[j] * barang.hargaBarang[j];   
      }; 
      if(i == 9){
        cin >> p10.Bb.akumulasi[j]; 
        barang.totalhasilTerjual[j] += p10.Bb.akumulasi[j] * barang.hargaBarang[j];
        p10.Bb.totalhasilPramuniaga += p10.Bb.akumulasi[j] * barang.hargaBarang[j];   
      }; 
    }
  }

  cout << endl << "LIST HARGA TIAP BARANG" << endl;
  cout << "| Barang   | Harga ";
  for (int i = 0; i < 5; i++){
    cout << endl << "| Barang " << i + 1 << " | Rp." << barang.hargaBarang[i];
  }
  
  cout << endl << endl << "DAFTAR PENJUALAN BARANG" << endl;
  cout << "| Barang   | Total Hasil Penjualan";
    for (int i = 0; i < 5; i++){
      cout << endl; 
      cout << "| Barang " << i + 1 << " | Rp." << barang.totalhasilTerjual[i];
    };
  
  cout << endl << endl << "DAFTAR HASIL PENJUALAN PRAMUNIAGA" << endl;
  cout << "| Pramuniaga    | Total Hasil Penjualan";
  for (int i = 0; i < 10; i++){
    cout << endl << "| Pramuniaga " << i + 1;
    i == 0 && cout << "  | Rp."<< p1.Bb.totalhasilPramuniaga ;     
    i == 1 && cout << "  | Rp."<< p2.Bb.totalhasilPramuniaga ;     
    i == 2 && cout << "  | Rp."<< p3.Bb.totalhasilPramuniaga ;     
    i == 3 && cout << "  | Rp."<< p4.Bb.totalhasilPramuniaga ;     
    i == 4 && cout << "  | Rp."<< p5.Bb.totalhasilPramuniaga ;     
    i == 5 && cout << "  | Rp."<< p6.Bb.totalhasilPramuniaga ;     
    i == 6 && cout << "  | Rp."<< p7.Bb.totalhasilPramuniaga ;     
    i == 7 && cout << "  | Rp."<< p8.Bb.totalhasilPramuniaga ;     
    i == 8 && cout << "  | Rp."<< p9.Bb.totalhasilPramuniaga ;     
    i == 9 && cout << " | Rp."<< p10.Bb.totalhasilPramuniaga;     
  }
  cout << endl;
  return 0;
}