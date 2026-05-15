#include <iostream>
using namespace std;

int main() {
    
    // Tanpa Array
    int nilai1 = 80;
    int nilai2 = 85;
    int nilai3 = 90;
    int nilai4 = 75;
    int nilai5 = 88;
    cout << "Nilai 1: " << nilai1 << endl;
    cout << "Nilai 2: " << nilai2 << endl;
    cout << "Nilai 3: " << nilai3 << endl;
    cout << "Nilai 4: " << nilai4 << endl;
    cout << "Nilai 5: " << nilai5 << endl;
    cout << "-----------------" << endl;

    // Dengan Array
    // digunakan untuk menyimpan beberapa nilai dalam satu variabel dengan tipe data yang sama, sehingga memudahkan dalam pengelolaan data
    int nilai[5] = {80, 85, 90, 75, 88};
    cout << "Nilai 1: " << nilai[0] << endl;
    cout << "Nilai 2: " << nilai[1] << endl;
    cout << "Nilai 3: " << nilai[2] << endl;
    cout << "Nilai 4: " << nilai[3] << endl;
    cout << "Nilai 5: " << nilai[4] << endl;

    return 0;

}