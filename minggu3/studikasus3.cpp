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

    cout << "\nFaktorial dari " << angka << " = " << faktorial(angka);

    return 0;
}