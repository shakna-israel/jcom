#ifndef JCOM_MAIN

#include <stdio.h>
#include <string.h>

// Change these two if you want to change screen size
#define SCREEN_WIDTH 40
#define SCREEN_HEIGHT 20

extern int screen[SCREEN_HEIGHT][SCREEN_WIDTH];
extern int print_pos[2];
int screen[SCREEN_HEIGHT][SCREEN_WIDTH] = {{0}, {0}};
int print_pos[2] = {0};

void flush_screen(void);
void clear_screen(void);
void intro(void);
void screen_char(int c, int y, int x);
void print(const char* str);

int main(int argc, char* argv[]);

#define JCOM_MAIN
#endif
