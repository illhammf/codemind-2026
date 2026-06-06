#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int main() {

    int x = tambah(5, 3);
    cout << x << endl; // hasil dari tambah itu adalah 8, karena 5 + 3 = 8

    cout << x * 2 << endl; // karena 8 itu adalah hasil dari tambah aja yang didefinisikan sebagai int x, yang padahal itu ada x di kali 2, yaitu 16, jadi kita menjadi nilai x dulu dari fungsi int tambah, lalu di kali 2

    return 0;
}