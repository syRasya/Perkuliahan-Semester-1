#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream myFile;
    
    // Membuka file dalam mode output (tulis)
    myFile.open("data.txt", ios::out);
    
    // Menulis teks ke dalam file
    myFile << "Hello, World!";
    
    myFile.close();
    return 0;
}