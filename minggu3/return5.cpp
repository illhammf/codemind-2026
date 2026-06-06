#include <iostream>
using namespace std;

int tambah(int a, int b)
{
    return a + b;
}

int kali(int a, int b){
    return a * b;
}

int bagi (int a, int b){
    return a / b;
}

int main()
{
    // Untuk input nilai dari parameter a dan b
    int a, b;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    cout << "\nHasil penjumlahan: " << tambah(a, b) << endl;
    cout << "\nHasil perkalian: " << kali(a, b) << endl;
    cout << "\nHasil pembagian: " << bagi(a, b) << endl;

    cout << "\nHasil tambah dan kali: " << tambah(a, b) + kali(a, b) << endl;

    cout << "\nHasil tambah dan bagi: " << tambah(a, b) + bagi(a, b) << endl;

    cout << "\nHasil kali dan bagi: " << kali(a, b) + bagi(a, b) << endl;
    return 0;
}