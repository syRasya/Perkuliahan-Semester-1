#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue; // lewati iterasi jika i genap
            cout << i << " ";
        }
    }
    cout << "\nLooping Selesai";
    // output
    // 1 3 5 7 9
    // Looping Selesai
    return 0;
}