#include <iostream>
using namespace std;

int main() {
    int nilai[5] = {80, 85, 90, 75, 88};

    int terbesar = nilai[0]; // digunakan untuk menyimpan nilai terbesar, dimana nilai[0] digunakan untuk menginisialisasi nilai terbesar dengan nilai pertama dalam array

    for (int i = 1; i < 5; i++) {
        if (nilai[i] > terbesar) { // digunakan untuk membandingkan nilai saat ini dengan nilai terbesar, jika nilai saat ini lebih besar dari nilai terbesar, maka nilai saat ini akan menjadi nilai terbesar yang baru
            terbesar = nilai[i];
        }
    }

    cout << "Nilai terbesar = " << terbesar;

    return 0;
}