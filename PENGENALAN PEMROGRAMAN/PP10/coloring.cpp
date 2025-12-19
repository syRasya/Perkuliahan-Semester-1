#include <curses.h>
#include <windows.h>
using namespace std;

int main(){
    // Mengubah warna terminal: Background Hitam (Default), Teks Biru (1)
    system("color 1"); 
    
    initscr();
    
    mvprintw(2, 2, "A");
    refresh();
    Sleep(500); 
    
    mvprintw(3, 2, "B");
    refresh();
    Sleep(1000); 
    
    mvprintw(4, 2, "D");
    refresh();
    Sleep(1500); 
    
    mvprintw(5, 2, "U");
    refresh();
    Sleep(500); 
    
    mvprintw(6, 2, "L");
    refresh();
    
    getch();
    endwin();
    return 0;
}