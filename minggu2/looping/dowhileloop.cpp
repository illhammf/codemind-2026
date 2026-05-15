#include <iostream>
using namespace std;

int main() {

    // Do While Loop
    // digunakan untuk perulangan yang akan dijalankan minimal satu kali, karena kondisi pengecekan dilakukan setelah perulangan
    int i = 1;

    do {
        cout << i << endl;
        i++;
    } while (i <= 5);

    cout <<"---------------" << endl;

    // do-while menjalankan isi program dulu, baru mengecek kondisi.
    int j = 10;

    do {
        cout << j << endl;
        j++;
    } while (j <= 5);

    return 0;
}