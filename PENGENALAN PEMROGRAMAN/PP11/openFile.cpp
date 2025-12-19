#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream myFile;
    
    // Mencoba membuka file data.txt
    myFile.open("data.txt");
    
    // Mengecek apakah operasi gagal
    if (myFile.fail()) {
        cout << "Gagal membuka file!" << endl;
    } else {
        cout << "File berhasil dibuka" << endl;
    }
    
    myFile.close();
    return 0;
}
