#include <iostream>
using namespace std;

int main() {
    system ("CLS");
    // Deklarasi variabel
    int Pilihan;
    // Inputan
    cout << "Daftar Calon Presiden : ";
    cout << "\n1. Soekarno";
    cout << "\n2. Soeharto";
    cout << "\n3. Bj. Habibie";
    cout << "\n4. Abdurrahman Wahid";
    cout << "\n5. Megawati Soekarno";
    cout << "\n6. Susilo Bambang Yudhoyono";
    cout << "\n7. Joko Widodo";
    cout << "\nMasukkan Pilihan Presiden Anda (1/2/3/4/5/6/7) : "; cin >> Pilihan;
    // Seleksi untuk menampilkan Output
    system ("CLS");
    switch (Pilihan) {
        case 1:
            cout << "Pilihan Anda telah disimpan, pilihan Anda adalah " <<  "1. Soekarno";
            break;
        case 2:
            cout << "Pilihan Anda telah disimpan, pilihan Anda adalah " <<  "2. Soeharto";
            break;
        case 3:
            cout << "Pilihan Anda telah disimpan, pilihan Anda adalah " <<  "3. Bj. Habibie";
            break;
        case 4:
            cout << "Pilihan Anda telah disimpan, pilihan Anda adalah " <<  "4. Abdurrahman Wahid";
            break;
        case 5:
            cout << "Pilihan Anda telah disimpan, pilihan Anda adalah " <<  "5. Megawati Soekarno";
            break;
        case 6:
            cout << "Pilihan Anda telah disimpan, pilihan Anda adalah " <<  "6. Susilo Bambang Yudhoyono";
            break;
        case 7:
            cout << "Pilihan Anda telah disimpan, pilihan Anda adalah " <<  "7. Joko Widodo";
            break;
        default :
            cout << "Pilihan Anda Tidak Valid!";
    }
}