#include <iostream>
using namespace std;

void salam(string nama, int umur) {
    cout << "Selamat Datang " << nama << " yang berumur " << umur << " tahun" << endl;
}

int main() {
    salam("Ilham", 20);
    salam("Naufal", 19);
    salam("Alif", 21);

    // Dengan menggunakan parameter, kita bisa membuat function yang lebih fleksibel
    // Kita bisa mengirimkan data yang berbeda-beda ke dalam function
}