#include <iostream>
using namespace std;

int main()
{
    string arr[] = {"Rafly", "Abdul", "Bachtiar", "Khaila", "Riki", "Maul"};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool find = false;
    string target = "Bachtiar";

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "Nama " << arr[i] << " ditemukan pada Index ke-" << i;
            find = true;
            break;
        }
    }

    if (!find)
    {
        cout << "Data tidak ditemukan";
    }
    return 0;
}