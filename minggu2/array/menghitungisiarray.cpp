#include <iostream>
using namespace std;

int main() {
    int nilai[5] = {80, 85, 90, 75, 88};
    int total = 0;

    for (int i = 0; i < 5; i++) {
        total = total + nilai[i]; // digunakan untuk menjumlahkan semua nilai dalam array
    }

    cout << "Total = " << total << endl;

    return 0;
}