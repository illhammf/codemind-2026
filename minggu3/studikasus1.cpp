#include <iostream>
using namespace std;

int kali(int a, int b) {
    return a * b;
}

int main() {

    int angka1, angka2;

    cout << "\nMasukkan angka pertama : ";
    cin >> angka1;

    cout << "Masukkan angka kedua : ";
    cin >> angka2;

    cout << "\nHasil perkalian = " << kali(angka1, angka2);

    return 0;
}