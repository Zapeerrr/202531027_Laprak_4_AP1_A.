#include <iostream>
using namespace std;

int main() {
    int kodebenar = 7;
    int tebakan;
    const int maxpercobaan = 3;
    
    for (int percobaan = 1; percobaan <= maxpercobaan; percobaan++) {
        cout << "Percobaan " << percobaan << "/3 - Tebak: ";
        cin >> tebakan;
        
        if (tebakan == kodebenar) {
            cout << "Benar!" << endl;
            return 0; 
        } else {
            cout << "Salah!" << endl;
        }
    }
    
    cout << "Kalah! Angka = " << kodebenar << endl;
    
    return 0;
}
