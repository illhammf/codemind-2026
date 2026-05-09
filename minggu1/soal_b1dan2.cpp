#include <iostream>
using namespace std;

int main() {
    int umur;

    cout << "Masukkan umur: ";
    cin >> umur;

    if (umur >= 17 && umur <= 30) {
        cout << "Boleh Masuk";
    } else {
        cout << "Tidak Boleh Masuk" << endl;
        cout << "Umur harus antara 17 dan 30 tahun";
    }

    return 0;
}