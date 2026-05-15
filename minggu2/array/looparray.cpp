#include <iostream>
using namespace std;

int main()
{
    // Looping Array
    int nilai[5] = {80, 85, 90, 75, 88};

    for (int i = 0; i < 5; i++) // mulai dari indeks 0 hingga 4, karena array dimulai dari indeks 0
    { // digunakan untuk melakukan perulangan pada array, dimana i adalah indeks dari array yang dimulai dari 0 hingga 4
        cout << nilai[i] << endl;
    }

    return 0;
}