#include <iostream>
using namespace std;

void nama(string nama, int umur, string alamat) {
    cout << "Nama Saya " << nama << " dan umur saya " << umur << " tahun, " << alamat << endl;
}

int main() {
    nama("Ilham", 20, "Jakarta");
    nama("Nopal", 19, "Bandung");
    nama("Alif", 25, "Surabaya");

    return 0;
}

