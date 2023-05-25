#include <iostream>

using namespace std;

int pembagianRekursif(int a, int b) {
  if (a < b) {
    return 0;
  } else {
    return 1 + pembagianRekursif(a - b, b);
  }
}

int main() {
  int angka1, angka2;
  cout << "Masukkan angka pertama: ";
  cin >> angka1;
  cout << "Masukkan angka kedua: ";
  cin >> angka2;

  int hasil = pembagianRekursif(angka1, angka2);
  cout << "Hasil pembagian: " << hasil << endl;

  return 0;
}
