#include <iostream>
using namespace std;

int main(){
    // 1. Array 1 dimensi & mengakses elemen array menggunakan indeks
    int tanggal[12] = {3, 8, 15, 6, 27, 19, 13, 20, 31, 22, 4, 10};
    cout << "Tanggal " << tanggal[9];

    string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    cout << " Hari " << hari[4] << endl;

    // 2. Array karakter (char) dan string
    char namaP[] = {'K', 'a', 'i'};
    cout << "Nama panggilan (char) : " << namaP << endl;

    string namaL = "Kai Penakluk Dunia";
    cout << "Nama lengkap (string) : " << namaL << endl << endl;

    // 3. Perulangan: while loop untuk menampilkan contoh seluruh array
    int i = 0;
    while( i < 7 ){
        cout << "Hari ke-" << (i + 1) << " : " << hari[i] << endl;
        i++;
    }
    cout << endl;

    // 4. Menghitung panjang array (jumlah elemen)
    int panjang = sizeof(hari) / sizeof(hari[0]);
    cout << "Panjang array hari adalah : " << panjang << endl;
    cout << "Kai Menaklukan Dunia dalam " << panjang << " hari." << endl << endl;

    // 5. Menghitung total dan rata-rata penjualan
    // Disarankan menggunakan const int untuk ukuran array statis
    const int jumlahHari = 7; 
    int penjualan[jumlahHari];
    int totalPenjualan = 0;
    float rataRata;

    cout << "Masukkan penjualan berapa porsi Chicken Katsu selama " << jumlahHari << " hari:" << endl;
    for( int j = 0; j < jumlahHari; j++ ){
        cout << "Penjualan hari " << hari[j] << " : ";
        cin >> penjualan[j];
        totalPenjualan += penjualan[j];
    }

    rataRata = (float)totalPenjualan / jumlahHari;
    cout << "Total porsi Chicken Katsu yang telah terjual : " << totalPenjualan << " porsi." << endl;
    cout << "Rata-rata penjualan Chicken Katsu selama " << jumlahHari << " hari adalah: " << rataRata << " porsi." << endl << endl;

    // 6. Array 2 dimensi
    int matriks[100][100];
    int jumlahBaris, jumlahKolom;

    cout << "Masukkan jumlah bulan dan tanggal buka kedai Chicken Katsu : " << endl;
    cout << "Input jumlah bulan (baris matriks) : ";
    cin >> jumlahBaris;
    cout << "Input jumlah tanggal (kolom matriks) : ";
    cin >> jumlahKolom;

    // Input elemen matriks
    for(int x = 0; x < jumlahBaris; x++){
        for(int y = 0; y < jumlahKolom; y++){
            // Pada gambar asli tertulis 'i + 1', namun logika loop menggunakan 'x'.
            // Di sini saya perbaiki menjadi 'x + 1' agar tampilan barisnya benar.
            cout << "Baris " << x + 1 << ", Kolom " << y + 1 << " = ";
            cin >> matriks[x][y];
        }
    }

    cout << "Kedai Chicken Katsu buka selama : " << jumlahBaris << " bulan di tanggal tertentu." << endl;

    // Output matriks
    for(int x = 0; x < jumlahBaris; x++){
        for(int y = 0; y < jumlahKolom; y++){
            cout << matriks[x][y] << " ";
        }
        cout << endl;
    }

    return 0;
}