#include <curses.h>

// Fungsi prototipe untuk menampilkan menu
void print_menu(WINDOW *menu_win, int pilihanTerpilih, const char *opsi[], int jumlahOpsi);

int main(){
    initscr();
    clear();
    noecho();       // Tidak menampilkan input keyboard
    cbreak();       // Line buffering disabled (input langsung)
    curs_set(0);    // Menyembunyikan kursor
    
    int awalx = 0, awaly = 0;
    int lebar = 20, tinggi = 6;
    
    // Membuat window baru untuk menu
    WINDOW *menu_win = newwin(tinggi, lebar, awaly, awalx);
    keypad(menu_win, TRUE); // Mengaktifkan tombol keypad (panah) di window menu
    
    const char *opsi[] = {
        "Pilihan 1",
        "Pilihan 2",
        "Pilihan 3",
        "Keluar"
    };
    
    int jumlahOpsi = sizeof(opsi) / sizeof(opsi[0]);
    int pilihanTerpilih = 0;
    int pilihan = -1;
    
    while(1){
        print_menu(menu_win, pilihanTerpilih, opsi, jumlahOpsi);
        int tombol = wgetch(menu_win); // Membaca input dari window menu
        
        switch(tombol){
            case KEY_UP:
                if(pilihanTerpilih == 0)
                    pilihanTerpilih = jumlahOpsi - 1; // Wrap ke bawah
                else
                    pilihanTerpilih--;
                break;
                
            case KEY_DOWN:
                if(pilihanTerpilih == jumlahOpsi - 1)
                    pilihanTerpilih = 0; // Wrap ke atas
                else
                    pilihanTerpilih++;
                break;
                
            case 10: // Tombol Enter (ASCII 10)
                pilihan = pilihanTerpilih;
                break;
        }
        
        // Jika pilihan adalah indeks ke-3 ("Keluar"), hentikan loop
        if(pilihan == 3)
            break;
    }
    
    // Membersihkan dan menutup
    clrtoeol();
    refresh();
    endwin();
    return 0;
}

// Implementasi fungsi print_menu
void print_menu(WINDOW *menu_win, int pilihanTerpilih, const char *opsi[], int jumlahOpsi){
    box(menu_win, 0, 0); // Membuat kotak di sekeliling window
    
    for(int i = 0; i < jumlahOpsi; ++i){
        if(i == pilihanTerpilih){
            wattron(menu_win, A_REVERSE); // Highlight pilihan terpilih
            mvwprintw(menu_win, i + 1, 1, "%s", opsi[i]);
            wattroff(menu_win, A_REVERSE); // Matikan highlight
        } else {
            mvwprintw(menu_win, i + 1, 1, "%s", opsi[i]);
        }
    }
    wrefresh(menu_win); // Refresh window menu
}