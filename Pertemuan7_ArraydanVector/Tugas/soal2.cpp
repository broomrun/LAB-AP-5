#include <iostream>
#include <vector> 
#include <cmath>
#include <iomanip>
using namespace std;

float hitungEfisiensi(int A, int B, int C) {
  return sqrt(A * A + B * B + C * C);
} 

int main() {
    system("CLS");

  vector<vector<int> > angka;
  
  angka.resize(3);
  for(int i = 0; i < 3; i++) {
    angka[i].resize(3); 
  }

  cout << "Masukkan 3 baris yang merupakan representasi tabel 3x3:" << endl;

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      cin >> angka[i][j];
    }
  }
  
  float maxEfisiensi = 0;

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      for(int k = 0; k < 3; k++) {
      
        if(i != j && j != k && i != k) {
        
          float efisiensi = hitungEfisiensi(angka[i][0], angka[j][1], angka[k][2]);
        
          if(efisiensi > maxEfisiensi) {
            maxEfisiensi = efisiensi;
          }
        }
      }
    }
  }

  cout << "Nilai efisiensi tertinggi: " << fixed << setprecision(1) << maxEfisiensi << endl;

  return 0;
}
