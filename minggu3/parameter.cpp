#include <iostream>
using namespace std;

void salam(string nama) {
    cout << "Selamat Datang " << nama << endl;
}

int main() {
    salam("Ilham");
    salam("Naufal");
    salam("Alif");
    
    // Dengan menggunakan parameter, kita bisa membuat function yang lebih fleksibel
    // Kita bisa mengirimkan data yang berbeda-beda ke dalam function
}