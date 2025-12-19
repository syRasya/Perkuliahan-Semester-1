#include <iostream>
using namespace std;

int main()
{
    int baris = 4;
    int kolom = 5;
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
