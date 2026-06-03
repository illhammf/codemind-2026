// A
#include <iostream>
using namespace std;

void salam() {
    cout << "Halo"; // jadi function langsung menampilkan outputnya tanpa harus menggunakan cout lagi di dalam main
}

int main() {

    salam();

    return 0;
}

// B
#include <iostream>
using namespace std;

string salam() {
    return "Halo"; // cuma ngasih balik nilai, jadi kita harus menggunakan cout di dalam main untuk menampilkan outputnya
}

int main() {

    cout << salam(); // yang mencetak 

    return 0;
}