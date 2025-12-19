#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream myFile;
    char karakter;
    string teks;

    // Membuka file dalam mode input (baca)
    myFile.open("data.txt", ios::in);

    // Loop membaca sampai akhir file (End Of File)
    while(!myFile.eof()) {
        myFile.get(karakter);
        teks += karakter;
    }

    cout << teks;
    myFile.close();
    return 0;
}