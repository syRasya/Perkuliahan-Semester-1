#include <curses.h> // Atau <ncurses/curses.h> tergantung sistem operasi

int main() {
    initscr();              // Menginisialisasi layar (screen)
    printw("Hello World!"); // Menampilkan tulisan ke layar
    refresh();              // Merefresh layar agar tulisan muncul dari buffer
    getch();                // Menahan layar agar tidak langsung tertutup (pause)
    endwin();               // Mengakhiri mode ncurses dan mengembalikan memori
    return 0;
}