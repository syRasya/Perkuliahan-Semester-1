#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream myFile;
    string teks;

    cout << "Masukkan teks yang ingin ditambahkan: ";
    getline(cin, teks);

    // Membuka file dengan mode append (tambah data di akhir)
    myFile.open("data.txt", ios::app);
    
    myFile << teks;

    cout << "Teks berhasil ditambahkan!" << endl;

    myFile.close();
    return 0;
}