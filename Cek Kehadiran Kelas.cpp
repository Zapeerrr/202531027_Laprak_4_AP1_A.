#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int r;
	int hadir = 0;
	int tidak_hadir= 0;

cout << "Masukkan jumlah mahasiswa: ";
cin >> r;

for(int i = 1; i <= r; i++){
    int a;
    cout << "Mahasiswa " << i << " (1=hadir, 0=tidak): ";
    cin >> a;
    
    while(a != 0 && a != 1){
        cout << "Input tidak valid! Masukkan 1 untuk hadir atau 0 untuk tidak: ";
        cin >> a;
    }
    
    if(a == 1){
        hadir++;
    }
    else if(a == 0){
        tidak_hadir++;
    }
}

double persen = 0.0;
if(r > 0){
    persen = (double)hadir / r * 100;
}

cout << fixed << setprecision(2);
cout << "\nHadir: " << hadir << endl;
cout << "Tidak hadir: " << tidak_hadir << endl;
cout << "Persentase hadir: " << persen << "%" << endl;

return 0;
}
