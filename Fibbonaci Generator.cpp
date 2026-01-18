#include <iostream>
using namespace std;

int main(){
    int pilihan;
    int a = 0, b = 1, c;
    
    
    cout << "+-----------------------------------------+\n";
    cout << "|         FIBONACCI GENERATOR V.2.7        \n";
    cout << "+-----------------------------------------+\n";
    
    cout << "1) n suku " << endl;
    cout << "2) sampai <= m" << endl;
    cout << "3) Keluar dari program" << endl;
    cout << "+-----------------------------------------+\n";
    cout << "Pilih menu (1/2/3): ";
    cin >> pilihan;
    
    
    switch(pilihan){
        case 1: {
            int n;
            cout << "Masukkan suku (n): ";
            cin >> n;
            
            if(n < 0){
                cout << "\n Error: Input tidak valid!" << endl;
                return 0;
            }
            
            cout << "\nHasil " << n << " suku :" << endl;
            
            for(int i = 1; i <= n; i++){
                cout << a << " ";
                c = a + b;  
                a = b;     
                b = c;
            }
            break;
        }
        
        case 2: {
            int m;
            cout << "Masukkan batas nilai (m): ";
            cin >> m;
            
            if(m < 0){
                cout << "\n? Error: Input tidak valid!" << endl;
                return 0;
            }
            
            cout << "Hasil Fibonacci <= " << m << ":" << endl;

            while(a <= m){
                cout << a << " ";
                c = a + b;  
                a = b;      
                b = c;
            }
            break;
        }
        
        default:
            cout << "? Error: Pilihan tidak valid!" << endl;
            return 0;
    }
    
}
