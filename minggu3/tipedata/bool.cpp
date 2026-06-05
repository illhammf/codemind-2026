#include <iostream>
using namespace std;

bool lulus(int nilai) {

    return nilai >= 75;

}

int main() {

    if (lulus(80)) {
        cout << "Lulus";
    } else {
        cout << "Tidak Lulus";
    }

    return 0;
}