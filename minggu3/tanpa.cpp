#include <iostream>
using namespace std;

// Dengan Function
void welcome() {
    cout << "Selamat Datang Yaa" <<endl;
}

void nama() {
    cout << "Nama Saya Code Mind" << endl;
}

int main() {
    
    // Tanpa Function
    cout << "Selamat Datang Yaa" <<endl;
    cout << "Selamat Datang Yaa" <<endl;
    cout << "Selamat Datang Yaa" <<endl;

    // Dengan Function
    welcome();
    welcome();
    welcome();

    nama();
    nama();
    nama();

    // Daripada menulis kode yang sama berkali-kali, kita cukup membuat satu function lalu memanggilnya
    return 1;
}