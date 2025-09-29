#include <iostream>
using namespace std;

int main() {
    int usia;
    string status;
    cout << "Masukkan usia: ";
    cin >> usia;

    if (usia >= 23 && usia <= 28) {
        status = "SUDAH BEKERJA";
    } else if (usia >= 18 && usia <= 22) {
        status = "MAHASISWA";
    } else {
        status = "PELAJAR";
    }

    cout << "Status: " << status << endl;
    return 0;
}
