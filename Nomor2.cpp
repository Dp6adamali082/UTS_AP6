#include <iostream>
using namespace std;

int main() {
    system("cls");
    // deklarasi variabel
    int total_pembelian, uang_diterima, kembalian;
    int nominal[8] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 100};
    int jumlah_nominal[8] = {0};
    
    //inputan 
    cout << "Masukkan total pembelian: ";
    cin >> total_pembelian;
    cout << "Masukkan uang anda: ";
    cin >> uang_diterima;
    
        
    kembalian = uang_diterima - total_pembelian;
    cout << "Kembalian: " << kembalian << endl;
    
    
    for (int i = 0; i < 8; i++) {
        while (kembalian >= nominal[i]) {
            kembalian -= nominal[i];
            jumlah_nominal[i]++;
        }
    }
    
    
   
        
    
    
    return 0;
}
