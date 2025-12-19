#include <curses.h>
#include <windows.h> // Library untuk Sleep() di Windows
using namespace std;

int main(){
    initscr();
    
    mvprintw(2, 2, "A");
    refresh();
    Sleep(500); // Delay 0.5 detik (500 ms)
    
    mvprintw(3, 2, "B");
    refresh();
    Sleep(1000); // Delay 1 detik
    
    mvprintw(4, 2, "D");
    refresh();
    Sleep(1500); // Delay 1.5 detik
    
    mvprintw(5, 2, "U");
    refresh();
    Sleep(500); // Delay 0.5 detik
    
    mvprintw(6, 2, "L");
    refresh();
    
    getch();
    endwin();
    return 0;
}