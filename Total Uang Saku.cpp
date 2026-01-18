#include <iostream>
using namespace std;

int main() {
    int n;
    long long total = 0;
    
    cout << "Masukkan jumlah hari: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
    	long long uang;
        cout << "Uang saku hari ke-" << i << ": ";
        cin >> uang;
        
        if(uang < 0) {
            cout << "Input SALAH! Masukkan nilai positif." << endl;
            i--;
            continue;
        }
        
        total += uang;
    }
    
    cout << "\nTotal: " << total << endl;
    
    return 0;
}
