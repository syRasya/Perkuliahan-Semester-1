#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h> // Untuk system("cls")

using namespace std;

// Deklarasi fungsi main agar bisa dipanggil kembali (seperti di modul)
int main();

void registration(){
    ofstream myFile, accList;
    string userReg;

    system("cls"); // Membersihkan layar
    cout << "--REGISTER--" << endl;
    cout << "Enter Username: ";
    cin >> userReg;

    cout << endl;

    // Membuat file khusus untuk user tersebut (menyimpan skor awal 0)
    myFile.open(userReg + ".txt");
    myFile << 0;
    myFile.close();

    // Menambahkan username ke daftar akun global
    accList.open("ListAccount.txt", ios::app);
    accList << userReg << endl;
    accList.close();

    system("cls");
    cout << "Registration Successful" << endl;
    main(); // Kembali ke menu utama
}

void login(){
    ifstream myFile;
    string userLog;
    string userData;
    bool exist = false;

    system("cls");
    cout << "--LOGIN--" << endl;
    cout << "Enter Username: ";
    cin >> userLog;

    cout << endl;

    // Mengecek apakah username ada di ListAccount.txt
    myFile.open("ListAccount.txt");
    while (myFile >> userData) {
        if(userData == userLog) {
            exist = true;
        }
    }
    myFile.close();

    if (exist == true){
        system("cls");
        cout << "Login Successful" << endl;
        
        int topScore;
        cout << "Input Top Score: ";
        cin >> topScore;

        ofstream scoreFile;
        ifstream scoreCheck;
        int currentScore;

        // Membaca skor saat ini dari file user
        scoreCheck.open(userLog + ".txt");
        scoreCheck >> currentScore;
        scoreCheck.close();

        // Jika skor baru lebih tinggi, update file
        if (topScore > currentScore) {
            scoreFile.open(userLog + ".txt");
            scoreFile << topScore << endl;
            scoreFile.close();
            cout << "\n Your Top Score Is " << topScore;
        } else {
             cout << "\n Score tidak lebih tinggi dari record sebelumnya (" << currentScore << ")";
        }
    }
    else {
        system("cls");
        cout << "----------------" << endl;
        cout << " LOGIN ERROR " << endl;
        cout << "----------------" << endl;
        cout << "Please check your username" << endl;
        cout << " " << endl;
        main();
    }
}

int main(){
    int choice;
    cout << "1. Registration" << endl;
    cout << "2. Login" << endl;
    cout << "3. Input Your Choice: ";
    cin >> choice;

    switch(choice){
        case 1:
            registration();
            break;
        case 2:
            login();
            break;
    }
    return 0;
}