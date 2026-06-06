#include <iostream>
using namespace std;

int kali (int a, int b) {
    return a * b;
}

int main(){

    int angka1, angka2;

    cout << "\nMasukkan angka pertama: " << endl;
    cin >> angka1;

    cout <<"\nMasukkan angka kedua: " << endl;
    cin >> angka2;

    cout <<"\nHasil dari Perkalian = " << kali(angka1, angka2);

    return 0;
}
