#include <iostream>

using namespace std;

int main() {
    float angka, total = 0, rata;
    int jumlah;

    cout << "1. Mencari Rata-rata. (jumlah angka ditentukan)" << endl;
    cout << endl;
    cout << "Masukkan jumlah angka: ";
    cin >> jumlah;
    cout << endl;

    jumlah -= 1;

    for (int i = 0; i <= jumlah; i++) {
        cout << "Masukkan angka: ";
        cin >> angka;
        total = total + angka;
    }

    cout << endl;
    cout << "Total: " << total << endl;

    rata = total / (jumlah + 1);
    cout << "Rata-rata: " << rata << endl;

    return 0;
}