#ifndef __JCOM_MAIN__

#include <stdio.h>
#include <string.h>

// Change these two if you want to change screen size
#define SCREEN_WIDTH 40
#define SCREEN_HEIGHT 20

int screen[SCREEN_HEIGHT][SCREEN_WIDTH];
int print_pos[2];

void flush_screen();
void clear_screen();
void screen_char(int c, int y, int x);
void print(const char* str);

int main(int argc, char* argv[]);

#define __JCOM_MAIN__
#endif
