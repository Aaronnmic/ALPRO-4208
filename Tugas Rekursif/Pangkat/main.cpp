#include <iostream>

using namespace std;

int pangkatRekursif(int basis, int eksponen) {
  if (eksponen == 0) {
    return 1;
  } else {
    return basis * pangkatRekursif(basis, eksponen - 1);
  }
}

int main() {
  int basis, eksponen;
  cout << "Masukkan basis: ";
  cin >> basis;
  cout << "Masukkan eksponen: ";
  cin >> eksponen;

  int hasil = pangkatRekursif(basis, eksponen);
  cout << "Hasil pangkat: " << hasil << endl;

  return 0;
}
