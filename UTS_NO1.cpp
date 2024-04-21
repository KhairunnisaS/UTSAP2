#include <iostream>
// #include <conio.h>
using namespace std;

int main() {
    system("CLS");
    // Deklarasi variabel
    char KOM,NilaiHuruf;
    string Nama,NIM,MataKuliah,NamaDosenPA;
    int Kehadiran;
    float NilaiTugas,NilaiQuiz,NilaiUTS,NilaiUAS,JumlahKehadiran,Tugas,Quiz,UTS,UAS,NilaiAkhir;
    // Inputan
    cout << "Masukkan Nama                      : "; getline(cin, Nama);
    cout << "Masukkan NIM                       : "; getline(cin, NIM);
    cout << "Masukkan Nama Dosen PA             : "; getline(cin, NamaDosenPA);
    cout << "Masukkan Mata Kuliah               : "; getline(cin, MataKuliah);
    cout << "Masukkan KOM (A/B/C)               : "; cin >> KOM;
    cout << "Masukkan Jumlah Kehadiran (/14)    : "; cin >> Kehadiran;
    cout << "Masukkan Nilai Tugas               : "; cin >> Tugas;
    cout << "Masukkan Nilai Quiz                : "; cin >> Quiz;
    cout << "Masukkan Nilai UTS                 : "; cin >> UTS;
    cout << "Masukkan Nilai UAS                 : "; cin >> UAS;
    // Perhitungan nilai
    JumlahKehadiran = (Kehadiran/14) * 10;
    NilaiTugas = Tugas * 0.1;
    NilaiQuiz = Quiz * 0.1;
    NilaiUTS = UTS * 0.3;
    NilaiUAS = UAS * 0.4;
    NilaiAkhir = JumlahKehadiran + NilaiTugas + NilaiQuiz + NilaiUTS + NilaiUAS;
    // Seleksi untuk konversi nilai huruf
    if (NilaiAkhir >= 80 & NilaiAkhir <= 100) {
        NilaiHuruf = 'A';
    } else if (NilaiAkhir >= 75  && NilaiAkhir < 80) {
        NilaiHuruf = 'B+';
    } else if (NilaiAkhir >= 70  && NilaiAkhir < 75) {
        NilaiHuruf = 'B';
    } else if (NilaiAkhir >= 65  && NilaiAkhir < 70) {
        NilaiHuruf = 'C+';
    } else if (NilaiAkhir >= 60  && NilaiAkhir < 65) {
        NilaiHuruf = 'C';
    } else if (NilaiAkhir >= 50  && NilaiAkhir <60) {
        NilaiHuruf = 'D';
    } else if (NilaiAkhir >=0 && NilaiAkhir <=0) {
        NilaiHuruf = 'E';
    }
    // Output
    system("CLS");
    cout << "           Kartu Hasil Studi" << endl;
    cout << "Nama              : " << Nama << endl;
    cout << "NIM               : " << NIM << endl;
    cout << "Nama Dosen PA     : " << NamaDosenPA << endl;
    cout << "Mata Kuliah       : " << MataKuliah << endl;
    cout << "KOM               : " << KOM << endl;
    cout << "Nilai             : " << NilaiHuruf << endl;
    
    return 0;
} 