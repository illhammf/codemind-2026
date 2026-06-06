#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

void garis() {
    cout << "====================================================\n";
}

int main() {
    vector<string> judulProyek = {
        "Sistem Manajemen Perpustakaan Digital",
        "Sistem Inventaris Laboratorium Komputer",
        "Sistem Pengelolaan Data Mahasiswa",
        "Sistem Kasir Minimarket",
        "Sistem Reservasi Hotel",
        "Sistem Administrasi Klinik",
        "Sistem Peminjaman Kendaraan",
        "Sistem Pengelolaan Tabungan Siswa",
        "Sistem Pemesanan Catering",
        "Sistem Penjualan Tiket Bioskop",
        "Sistem Pengelolaan Data Pegawai",
        "Sistem Manajemen Laundry",
        "Sistem Pendaftaran Seminar",
        "Sistem Turnamen E-Sport",
        "Sistem Pengelolaan Toko Buku"
    };

    int jumlahKelompok = 13;

    if (jumlahKelompok > judulProyek.size()) {
        cout << "Jumlah judul proyek tidak mencukupi!\n";
        return 0;
    }

    random_device rd;
    mt19937 g(rd());

    shuffle(judulProyek.begin(), judulProyek.end(), g);

    garis();
    cout << "        HASIL RANDOM JUDUL PROYEK CODE CLASH\n";
    garis();

    for (int i = 0; i < jumlahKelompok; i++) {
        cout << "Kelompok " << i + 1 << " : " << judulProyek[i] << endl;
    }

    garis();
    cout << "Total Kelompok      : " << jumlahKelompok << endl;
    cout << "Total Judul Tersedia: " << judulProyek.size() << endl;
    cout << "Judul Terpakai      : " << jumlahKelompok << endl;
    cout << "Judul Tidak Terpakai: " << judulProyek.size() - jumlahKelompok << endl;
    garis();

    cout << "\nRandom judul selesai. Semangat Code Clash!\n";

    return 0;
}