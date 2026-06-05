#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

float luasLingkaran(float r) {
    return 3.14 * r * r;
}

double bagi(double a, double b) {
    return a / b;
}

char grade() {
    return 'A';
}

string nama() {
    return "Ilham";
}

bool lulus(int nilai) {
    return nilai >= 75;
}

int main() {

    cout << "INT     : " << tambah(10, 5) << endl;
    cout << "FLOAT   : " << luasLingkaran(7) << endl;
    cout << "DOUBLE  : " << bagi(10, 3) << endl;
    cout << "CHAR    : " << grade() << endl;
    cout << "STRING  : " << nama() << endl;
    cout << "BOOL    : " << lulus(80) << endl;

    return 0;
}