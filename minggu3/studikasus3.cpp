#include <iostream>
using namespace std;

int faktorial(int n)
{

    int hasil = 1;

    for (int i = 1; i <= n; i++)
    {
        hasil = hasil * i;
    }

    return hasil;
}

int main()
{

    int angka;

    cout << "\nMasukkan angka : ";
    cin >> angka;

    // Proses perhitungan faktorial
    cout << "\nMenghitung faktorial dari " << angka << "..." << endl;
    cout << "Proses: ";
    for (int i = 1; i <= angka; i++)
    {
        cout << i;
        if (i < angka)
            cout << " x ";
    }

    cout << "\n---------------------" << endl;
    
    cout << "\nFaktorial dari " << angka << " = " << faktorial(angka);

    return 0;
}