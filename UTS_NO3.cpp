#include <iostream>
using namespace std;

int main() {
    system ("CLS");
    // Deklarasi dan Inisialisasi variabel
    int n,i,j,JumlahKuadrat = 0;
    // Inputan
    cout << "n : "; cin >> n;
    // Perulangan dari 1-n 
    for (i=1;i<=n;i++) {
        if (i % 2 == 1) { // Seleksi untuk menentukan bilangan ganjil
            j = i * i; // Mengkuadratkan bilangan ganjil
            JumlahKuadrat = JumlahKuadrat + j; // Menjumlahkan semua kuadrat bilangan
        }
    }
    // Output
    cout << "n : " << n << " = " << JumlahKuadrat;
}