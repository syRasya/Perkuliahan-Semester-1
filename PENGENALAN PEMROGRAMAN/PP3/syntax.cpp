#include <iostream>
using namespace std;

int main()
{
    string nama;
    char kelas;
    int umur;
    float nilai;
    double tinggi;
    bool lulus = true;

    getline(cin, nama);

    cin >> kelas >> umur >> nilai >> tinggi;
    cout << nama << " " << kelas << " " << umur << " " << nilai << " " << tinggi << " " << lulus << endl;

    return 0;
}