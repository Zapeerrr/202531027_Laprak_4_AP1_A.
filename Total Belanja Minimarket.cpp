#include <iostream>
using namespace std;

int main() {
    int jumlah_barang = 0;
    double total_sebelum_diskon = 0;
    double harga;
    
    cout << "Belanja Minimarket" << endl;
    cout << "Masukkan harga barang (0 untuk selesai):" << endl;
    
    while(true) {
        cout << "Harga: ";
        cin >> harga;
        
        if(harga == 0) {
            break;
        }
        
        if(harga < 0) {
            cout << "Harga tidak valid! Masukkan harga positif atau 0 untuk selesai." << endl;
            continue;
        }
        
        jumlah_barang++;
        total_sebelum_diskon += harga;
    }
    
    double diskon = 0;
    double total_bayar = total_sebelum_diskon;
    
    if(total_sebelum_diskon >= 100000) {
        diskon = total_sebelum_diskon * 0.10;
        total_bayar = total_sebelum_diskon - diskon;
    }
    
    cout << "\nJumlah barang: " << jumlah_barang << endl;
    cout << "Total sebelum diskon: " << total_sebelum_diskon << endl;
    cout << "Diskon: " << diskon << endl;
    cout << "Total bayar: " << total_bayar << endl;
    
    return 0;
}
