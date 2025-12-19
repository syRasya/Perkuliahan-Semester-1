#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break; // hentikan loop jika i sama dengan 5
            cout << i << " ";
            cout << "\nLooping Selesai";
            // output
            // 12 3 4
            // Looping Selesai
                return 0;
        }
    }
}