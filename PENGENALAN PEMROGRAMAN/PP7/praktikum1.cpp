#include <iostream>
#include <string> // Diperlukan untuk getline
using namespace std;

void tampilNilai(string nama, double tugas, double uts, double uas) {
    cout << "Nama Mahasiswa : " << nama << endl;
    cout << "Nilai Tugas    : " << tugas << endl;
    cout << "Nilai UTS      : " << uts << endl;
    cout << "Nilai UAS      : " << uas << endl;
    cout << "Nilai Akhir    : " << (tugas + uts + uas) / 3 << endl;
}

int main() {
    string nama;
    double tugas, uts, uas;

    cout << "Masukkan Nama : ";
    getline(cin, nama);
    
    cout << "Masukkan Nilai Tugas: ";
    cin >> tugas;
    
    cout << "Masukkan Nilai UTS: ";
    cin >> uts;
    
    cout << "Masukkan Nilai UAS : ";
    cin >> uas;

    cout << endl; // Pemisah output
    tampilNilai(nama, tugas, uts, uas);

    return 0;
}