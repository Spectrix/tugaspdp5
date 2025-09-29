#include <iostream>
using namespace std;

int main() {
    int hari;
    cout << "Masukkan nomor hari (1-5): ";
    cin >> hari;

    switch (hari) {
        case 1:
            cout << "Senin" << endl;
            break;
        case 2:
            cout << "Selasa" << endl;
            break;
        case 3:
            cout << "Rabu" << endl;
            break;
        case 4:
            cout << "Kamis" << endl;
            break;
        case 5:
            cout << "Jumat" << endl;
            break;
        default:
            cout << "Nomor hari tidak valid" << endl;
    }
    return 0;
}
