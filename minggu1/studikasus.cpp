#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    string menu;
    int uang;
    int harga;

    // Tampilan menu
    cout << "\n--------- Selamat Datang di Warung Makan FASILKOM ---------" << endl;
    cout << "Masukkan menu: " << endl;
    cout << "1. Nasi" << endl;
    cout << "2. Mie Ayam" << endl;
    cout << "3. Baso" << endl;
    cout << "4. Air" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "menu = "; cin >> menu;

    // Validasi input menu
    cout << "\n---- Masukkan jumlah uang kamu ----" << endl;
    cout << "Uang = "; cin >> uang;
    if (uang > 100000) { // Jika uang melebihi 100000
        cout << "Uang tidak boleh melebihi 100000!!!" << endl;
        return 0;
    } else if (uang < 0) { // Jika uang bernilai negatif
        cout << "Uang tidak boleh negatif!!!" << endl;
        return 0;
    }

    // Menentukan harga berdasarkan menu yang dipilih
    if (menu == "Nasi") {
        harga = 10000;
    } else if (menu == "Mie Ayam") {
        harga = 15000;
    } else if (menu == "Baso") {
        harga = 12000;
    } else if (menu == "Air") {
        harga = 5000;
    } else {
        cout << "menu tidak tersedia!!!" << endl;
        return 0;
    }

    // Validasi uang dengan harga
    if (uang < harga) {
        cout << "Uang tidak cukup!!!!" << endl;
    } else {
        cout << "---------- Pembelian berhasil -----------" << endl;
        cout << "Kembalian = " << uang - harga << endl;
        cout << "\n----- Terima kasih telah berbelanja -----" << endl;
    }

    return 0; // Mengembalikan nilai 0 untuk menandakan program selesai dengan sukses
}