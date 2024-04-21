#include <iostream>
using namespace std; // Seharusnya using namespace std;

int main() {
    system ("CLS");
    int a; // Seharusnya a memiliki tipe data integer
    umur: // Seharusnya ; diganti dengan :
    cout << "Tebak umur saya : "; // Seharusnya diakhiri ;
    cin >> a; // Seharusnya perintah cin menggunakan tanda >>
    if (a == 20) { // Seharusnya == untuk operator relasi
        cout << "Jawaban Anda Benar" << endl;
    } else { // Seharusnya else saja, jika hanya untuk 2 kondisi
        cout << "Jawaban Salah, Coba Lagi..." << endl; // Seharusnya diakhiri ;
        goto umur;
    }
    cout << "Program Selesai";

    return 0;
}