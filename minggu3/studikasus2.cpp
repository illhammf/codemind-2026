#include <iostream>
using namespace std;

void ganjilGenap(int angka) {

    if (angka % 2 == 0) {
        cout << "Genap";
    } else {
        cout << "Ganjil";
    }

}

int main() {

    int angka;

    cout << "\nMasukkan angka : ";
    cin >> angka;

    cout << "\nAngka " << angka << " adalah ";
    ganjilGenap(angka);

    return 0;
}