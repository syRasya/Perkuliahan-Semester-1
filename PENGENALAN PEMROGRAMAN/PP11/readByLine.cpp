#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream myFile;
    string teks;

    myFile.open("data.txt");

    // Membaca satu baris dari file
    getline(myFile, teks);

    cout << "=== Isi File 'data.txt' ===" << endl;
    cout << teks << endl;

    myFile.close();
    return 0;
}