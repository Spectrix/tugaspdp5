#include <iostream>
using namespace std;

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka > 0) {
        cout << "Nilai di atas nol" << endl;
    } else {
        cout << "Nilai yang diinput adalah " << angka << endl;
    }

    return 0;
}