#include <iostream>
using namespace std;

// Dengan Function
void welcome() {
    cout << "Selamat Datang Yaa" <<endl;
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
    // Daripada menulis kode yang sama berkali-kali, kita cukup membuat satu function lalu memanggilnya
}