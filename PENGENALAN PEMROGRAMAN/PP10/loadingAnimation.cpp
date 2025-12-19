#include <curses.h>
#include <windows.h>
using namespace std;

int main(){
    initscr();
    
    // Loop luar untuk mengulang animasi loading sebanyak 3 kali
    for(int i = 0; i < 3; i++){
        
        // Membuat bingkai loading statis
        mvprintw(26, 100, "Loading...");
        mvprintw(27, 100, "------------------"); 
        mvprintw(28, 100, "|                |");
        mvprintw(29, 100, "------------------");
        
        // Loop dalam untuk mengisi bar loading (animasi)
        for (int f = 1; f < 17; f++) {
            mvprintw(28, 100 + f, ">"); // Menampilkan karakter berjalan
            refresh(); // Perbarui tampilan layar
            Sleep(200); // Delay 0.2 detik agar terlihat bergerak
        }
        
        // Membersihkan area bar agar bisa diulang (opsional, tergantung logika yang diinginkan)
        // clear(); 
    }
    
    endwin();
    return 0;
}