#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream myFile;
    string teks;

    cout << "Masukkan teks yang ingin ditulis ke dalam file: ";
    getline(cin, teks);

    // Membuka/membuat file data.txt
    myFile.open("data.txt");
    
    // Menulis input user ke file
    myFile << teks;

    cout << "Teks berhasil ditulis ke dalam file!" << endl;

    myFile.close();
    return 0;
}