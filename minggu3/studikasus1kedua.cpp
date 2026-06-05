#include <iostream>
using namespace std;

int hitungTotal(int harga, int jumlah)
{

    return harga * jumlah;
}

int main()
{

    int harga, jumlah;

    cout << "\nHarga barang : ";
    cin >> harga;

    cout << "Jumlah barang : ";
    cin >> jumlah;

    cout << "Total = Rp" << hitungTotal(harga, jumlah);

    return 0;
}