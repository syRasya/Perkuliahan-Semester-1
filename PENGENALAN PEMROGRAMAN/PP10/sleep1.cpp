#include <curses.h>
#include <unistd.h> // Library untuk sleep() di Linux/Unix
using namespace std;

int main(){
    initscr(); // Memulai mode ncurses
    
    mvprintw(2, 2, "Hello");
    refresh();
    
    sleep(2); // Penundaan selama 2 detik
    
    mvprintw(3, 2, "World!");
    refresh();
    
    getch(); // Menunggu input user sebelum menutup
    endwin(); // Mengakhiri mode ncurses
    return 0;
}