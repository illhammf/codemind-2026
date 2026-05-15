<div align="center">

# 🔁 CODE MIND — MINGGU 2
## Looping & Array

<img src="https://readme-typing-svg.herokuapp.com?font=Poppins&weight=600&size=22&pause=1000&color=00C2FF&center=true&vCenter=true&width=800&lines=Belajar+Berpikir+Efisien+Dalam+Pemrograman.;Memahami+Looping+dan+Array.;Code+Your+Logic%2C+Shape+Your+Future." />

---

</div>

---

# 📖 Tentang Pertemuan Ini

Pada minggu ke-2 **CODE MIND**, peserta mulai mempelajari dua konsep penting dalam pemrograman:

- 🔁 Looping
- 📦 Array

Materi ini menjadi fondasi penting untuk:
- membuat program lebih efisien
- mengolah banyak data
- menghindari penulisan kode berulang
- membangun logika pemrograman yang lebih terstruktur

---

# 🔁 LOOPING

## Apa Itu Looping?

Looping adalah proses menjalankan perintah secara berulang selama kondisi tertentu masih terpenuhi.

Tanpa looping:
```cpp
cout << 1 << endl;
cout << 2 << endl;
cout << 3 << endl;
```

Dengan looping:
```cpp
for (int i = 1; i <= 3; i++) {
    cout << i << endl;
}
```

Lebih singkat, lebih rapi, dan lebih efisien.

---

# ⚡ Jenis Looping di C++

## 1️⃣ For Loop
Digunakan ketika jumlah perulangan sudah diketahui.

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << endl;
}
```

---

## 2️⃣ While Loop
Digunakan ketika perulangan berdasarkan kondisi tertentu.

```cpp
int i = 1;

while (i <= 5) {
    cout << i << endl;
    i++;
}
```

---

## 3️⃣ Do-While Loop
Minimal dijalankan satu kali sebelum kondisi dicek.

```cpp
int i = 1;

do {
    cout << i << endl;
    i++;
} while (i <= 5);
```

---

# 📦 ARRAY

## Apa Itu Array?

Array adalah struktur data yang digunakan untuk menyimpan banyak data dengan tipe yang sama dalam satu variabel.

Contoh:

```cpp
int nilai[5] = {80, 85, 90, 75, 88};
```

Daripada membuat:
```cpp
nilai1
nilai2
nilai3
```

lebih efisien menggunakan array.

---

# 🧠 Karakteristik Array

✅ Tipe data sama  
✅ Memiliki indeks dimulai dari 0  
✅ Ukuran tetap  

---

# 🔍 Ilustrasi Indeks Array

```txt
Indeks : 0   1   2   3   4
Nilai  : 80  85  90  75  88
```

Contoh:
```cpp
nilai[0] // 80
nilai[2] // 90
```

---

# 🔥 LOOPING + ARRAY

Looping dan array biasanya digunakan bersama.

```cpp
int nilai[5] = {80, 85, 90, 75, 88};

for (int i = 0; i < 5; i++) {
    cout << nilai[i] << endl;
}
```

Dengan cara ini:
- semua data dapat ditampilkan otomatis
- program menjadi lebih cepat
- kode lebih singkat dan rapih

---

# 🛠 Contoh Program

## Menampilkan Angka 1–20

```cpp
for (int i = 1; i <= 20; i++) {
    cout << i << endl;
}
```

---

## Menampilkan Bilangan Ganjil

```cpp
for (int i = 1; i <= 20; i++) {
    if (i % 2 != 0) {
        cout << i << endl;
    }
}
```

---

## Input dan Menampilkan Isi Array

```cpp
int angka[5];

for (int i = 0; i < 5; i++) {
    cin >> angka[i];
}

for (int i = 0; i < 5; i++) {
    cout << angka[i] << endl;
}
```

---

# 🎯 Tujuan Pembelajaran

Melalui materi ini, peserta belajar untuk:

- memahami konsep perulangan
- mengelola banyak data menggunakan array
- membuat program lebih efisien
- melatih logika pemrograman
- berpikir lebih sistematis dalam menyelesaikan masalah

---

# 💡 Filosofi CODE MIND

> “Programmer yang baik bukan yang mengetik kode paling banyak,  
> tetapi yang mampu membuat solusi paling efisien.”

---

# 🚀 CODE MIND

### Belajar Logika.
### Melatih Konsistensi.
### Menjadi Problem Solver.

<div align="center">

## 🔁 Minggu 2 Selesai

✨ Looping & Array ✨

</div>