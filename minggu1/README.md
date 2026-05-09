# CODE MIND 2026 - Minggu Pertama
### 09 Mei 2026

---

## A1. Algoritma Membuat Teh Manis
1. Siapkan gelas, sendok, teh, gula, dan air panas.
2. Masukkan teh ke dalam gelas.
3. Tuangkan air panas secukupnya.
4. Tunggu beberapa saat sampai warna teh keluar.
5. Tambahkan gula sesuai selera.
6. Aduk sampai gula larut.
7. Teh manis siap diminum.

## A2. Perbedaan Logika Pemrograman dan Algoritma

- **Logika pemrograman** adalah cara berpikir untuk menyelesaikan masalah secara runtut.

- **Algoritma** adalah langkah-langkah yang ditulis secara berurutan untuk menjalankan solusi tersebut.

Contoh gampangnya:
**Logika**:
Untuk membuat teh manis, kita perlu mencampur teh, air panas, dan gula.

**Algoritma**:
Langkah detailnya mulai dari menyiapkan bahan, menuang air, menambah gula, mengaduk, sampai teh siap diminum.

## A3. 3 Manfaat Logika Pemrograman
1. Membantu menyusun solusi dengan jelas.
2. Mengurangi kesalahan saat membuat program.
3. Mempermudah mencari dan memperbaiki error.

---

## B1. Mengecek Angka Lebih Besar dari 0
Jika angka > 0 → tampilkan "Angka Positif"

```bash
#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka > 0) {
        cout << "Angka Positif";
    }

    return 0;
}
```

**Penjelasan**
```sh
int angka;
```
Membuat variabel bernama angka.
```sh
cin >> angka;
```
Meminta input dari user.
```sh
if (angka > 0)
```
Artinya:
“Kalau angka lebih besar dari 0”

maka:
```sh
cout << "Angka Positif";
```
akan dijalankan.

## B2. Menentukan Boleh Masuk Kelas atau Tidak
Jika umur ≥ 17 → "Boleh Masuk"
Jika umur < 17 → "Tidak Boleh Masuk"
```sh
#include <iostream>
using namespace std;

int main() {
    int umur;

    cout << "Masukkan umur: ";
    cin >> umur;

    if (umur >= 17) {
        cout << "Boleh Masuk";
    } else {
        cout << "Tidak Boleh Masuk";
    }

    return 0;
}

```
**Penjelasan**
```sh
>=
```
Artinya:
“lebih besar atau sama dengan”
```sh
if
```
Kalau kondisi benar.
```sh
else
```
Kalau kondisi salah.

Jadi:
- umur 17 → boleh
- umur 20 → boleh
- umur 15 → tidak boleh

### B3. Menentukan Ganjil atau Genap
Jika habis dibagi 2 → "Genap"
Jika tidak → "Ganjil"
```sh
#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka % 2 == 0) {
        cout << "Genap";
    } else {
        cout << "Ganjil";
    }

    return 0;
}

```
**Penjelasan Penting**
```sh
%
```
Adalah operator modulus.
Digunakan untuk mencari sisa hasil bagi.
Contoh:
```sh
10 % 2
```
Hasil:
```sh
0
```
Karena 10 habis dibagi 2.

Contoh lain:
```sh
7 % 2
```
Hasil:
```sh
1
```
Karena ada sisa 1.
### Kenapa Bisa Tau Ganjil/Genap?
**Genap**
Kalau dibagi 2 sisanya 0.
Makanya:
```sh
angka % 2 == 0
```

**Ganjil**
Kalau sisanya bukan 0.
Maka masuk ke:
```sh
else
```

---

