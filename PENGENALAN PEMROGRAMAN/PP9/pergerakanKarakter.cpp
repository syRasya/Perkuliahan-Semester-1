#include <curses.h>
#include <string>
using namespace std;

int main() {
    int x = 10, y = 10; // Posisi awal teks
    int ch;

    // Inisialisasi ncurses
    initscr();
    
    // Mengaktifkan mode input mentah (raw), menerima input apa adanya
    raw();
    
    // Mengaktifkan penangkapan tombol khusus seperti panah (keypad)
    keypad(stdscr, TRUE);
    
    // Mencegah karakter yang ditekan muncul di layar (no echo)
    noecho();

    // Instruksi awal
    mvprintw(0, 0, "Gunakan tombol panah untuk menggerakkan teks. Tekan 'q' untuk keluar.");

    // Loop untuk menangani input dan pergerakan
    // Program berjalan selama tombol yang ditekan bukan 'q'
    while((ch = getch()) != 'q') {
        
        // Membersihkan layar setiap kali pergerakan terjadi
        clear();
        
        // Menampilkan instruksi kembali setelah clear screen
        mvprintw(0, 0, "Gunakan tombol panah untuk menggerakkan teks. Tekan 'q' untuk keluar.");

        // Switch case untuk mengontrol pergerakan berdasarkan tombol panah
        switch(ch) {
            case KEY_UP:
                // Bergerak ke atas, mencegah keluar batas atas (y > 0)
                y = (y > 0) ? y - 1 : y; 
                break;
            case KEY_DOWN:
                // Bergerak ke bawah, mencegah keluar batas bawah (LINES)
                y = (y < LINES - 1) ? y + 1 : y;
                break;
            case KEY_LEFT:
                // Bergerak ke kiri, mencegah keluar batas kiri (x > 0)
                x = (x > 0) ? x - 1 : x;
                break;
            case KEY_RIGHT:
                // Bergerak ke kanan, mencegah keluar batas kanan (COLS)
                x = (x < COLS - 1) ? x + 1 : x;
                break;
        }

        // --- Bagian Debugging (Menampilkan koordinat) ---
        string xTemp = to_string(x);
        string yTemp = to_string(y);
        string chTemp = to_string(ch);

        mvprintw(1, 0, "x: ");
        mvprintw(1, 4, xTemp.c_str());

        mvprintw(2, 0, "y: ");
        mvprintw(2, 4, yTemp.c_str());

        mvprintw(3, 0, "in: ");
        mvprintw(3, 4, chTemp.c_str());
        // -----------------------------------------------

        // Menampilkan karakter 'X' pada posisi terbaru (y, x)
        mvprintw(y, x, "X");

        // Meng-update tampilan
        refresh();
    }

    // Mengakhiri mode ncurses sebelum keluar program
    endwin();

    return 0;
}