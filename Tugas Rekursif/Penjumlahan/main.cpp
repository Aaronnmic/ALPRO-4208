#include <iostream>

using namespace std;

int penjumlahanRekursif(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n + penjumlahanRekursif(n - 1);
  }
}

int main() {
  int angka;
  cout << "Masukkan angka: ";
  cin >> angka;

  int hasil = penjumlahanRekursif(angka);
  cout << "Hasil penjumlahan dari 1 hingga " << angka << " adalah: " << hasil << endl;

  return 0;
}
