#include <iostream>
using namespace std;

float hitungRataRata(float tugas, float uts, float uas) {
    return (tugas * 0.3) + (uts * 0.3) + (uas * 0.4);
}

char tentukanGrade(float nilaiAkhir) {
    if (nilaiAkhir >= 85) return 'A';
    else if (nilaiAkhir >= 75) return 'B';
    else if (nilaiAkhir >= 65) return 'C';
    else if (nilaiAkhir >= 50) return 'D';
    else return 'E';
}

bool cekLulus(float nilaiAkhir) {
    return nilaiAkhir >= 65;
}

string statusKelulusan(bool lulus) {
    if (lulus) return "LULUS";
    else return "TIDAK LULUS";
}

void tampilHeader() {
    cout << "======================================" << endl;
    cout << "     SISTEM PENILAIAN MAHASISWA        " << endl;
    cout << "======================================" << endl;
}

void tampilHasil(string nama, float nilaiAkhir, char grade, string status) {
    cout << "\n========== HASIL PENILAIAN ==========" << endl;
    cout << "Nama Mahasiswa : " << nama << endl;
    cout << "Nilai Akhir    : " << nilaiAkhir << endl;
    cout << "Grade          : " << grade << endl;
    cout << "Status         : " << status << endl;
    cout << "======================================" << endl;
}

int main() {
    string nama;
    float tugas, uts, uas;

    tampilHeader();

    cout << "Masukkan nama mahasiswa : ";
    getline(cin, nama);

    cout << "Masukkan nilai tugas    : ";
    cin >> tugas;

    cout << "Masukkan nilai UTS      : ";
    cin >> uts;

    cout << "Masukkan nilai UAS      : ";
    cin >> uas;

    float nilaiAkhir = hitungRataRata(tugas, uts, uas);
    char grade = tentukanGrade(nilaiAkhir);
    bool lulus = cekLulus(nilaiAkhir);
    string status = statusKelulusan(lulus);

    tampilHasil(nama, nilaiAkhir, grade, status);

    return 0;
}