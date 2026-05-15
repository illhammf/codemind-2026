#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) { // artinya jika i habis dibagi 2, maka i adalah angka genap
            cout << i << endl;
        }
    }

    return 0;
}