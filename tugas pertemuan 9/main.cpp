#include <iostream>
using namespace std;

int penjumlahan(int a, int b) {
  if (b == 0)
    return a;
  else
    return penjumlahan(a + 1, b - 1);
}

int pengurangan(int a, int b) {
  if (b == 0)
    return a;
  else
    return pengurangan(a - 1, b - 1);
}

int perkalian(int a, int b) {
  if (b == 1)
    return a;
  else
    return a + perkalian(a, b - 1);
}

int pembagian(int a, int b) {
  if (a < b)
    return 0;
  else
    return 1 + pembagian(a - b, b);
}

int pangkat(int a, int b) {
  if (b == 0)
    return 1;
  else
    return a * pangkat(a, b - 1);
}

int main() {
  int angka1, angka2;

  cout << "Masukkan angka pertama: ";
  cin >> angka1;
  cout << "Masukkan angka kedua: ";
  cin >> angka2;

  cout << "Hasil penjumlahan: " << penjumlahan(angka1, angka2) << endl;
  cout << "Hasil pengurangan: " << pengurangan(angka1, angka2) << endl;
  cout << "Hasil perkalian: " << perkalian(angka1, angka2) << endl;

  // Memastikan angka kedua tidak 0 untuk pembagian
  if (angka2 != 0)
    cout << "Hasil pembagian: " << pembagian(angka1, angka2) << endl;
  else
    cout << "Error: Pembagian dengan angka 0 tidak terdefinisi" << endl;

  cout << "Hasil pangkat: " << pangkat(angka1, angka2) << endl;

  return 0;
}

