#include <iostream>
using namespace std;

int tambah(int a, int b){
    return a + b;
}

int main(){

    int hasil = tambah(10,5) + tambah(2,3);
    // return pertama 15, return kedua 5, nilai hasil itu penjumlahan dari kedua return itu yaitu 15 + 5 = 20, dan outputnya pasti 20
    cout << hasil;

    return 0;
}