#include "main.h"
#include "cross.h"

void flush_screen() {
  for(int y = 0; y < SCREEN_HEIGHT; y++) {
    for(int x = 0; x < SCREEN_WIDTH; x++) {
      printf("%c", screen[y][x]);
    }
    printf("%c", '\n');
  }
}

void clear_screen() {
  // Clear out our screen memory
  for(int y = 0; y < SCREEN_HEIGHT; y++)
    for(int x = 0; x < SCREEN_WIDTH; x++) {
      screen[y][x] = 0;
    }

  // Clear the host OS terminal
  clearscr();
}

void screen_char(int c, int y, int x) {
// Write character to screen position
  screen[y][x] = c;
}

void print(const char* str) {
// Screen helper
// NOTE: Doesn't do anything if screen is full.
  for(unsigned int i = 0; i < strlen(str); i++) {
    if(print_pos[1] > SCREEN_WIDTH - 1) { print_pos[0]++; print_pos[1] = 0; }
    if(print_pos[0] > SCREEN_HEIGHT - 1) break;
    screen_char(str[i], print_pos[0], print_pos[1]);
    print_pos[1]++;
  }
}

void intro() {
// Only print our intro if the screen size fits.
#if SCREEN_WIDTH > 39 && SCREEN_HEIGHT > 5
printf("    _  ____ ____  _     \n"
"   / |/   _Y  _ \\/ \\__/|\n"
"   | ||  / | / \\|| |\\/||\n"
"/\\_| ||  \\_| \\_/|| |  ||\n"
"\\____/\\____|____/\\_/  \\|\n");

// Sleep for 2 seconds
sleepn(2000);
#else
  // Different screen size, quit.
  return;
#endif
}

#pragma GCC diagnostic ignored "-Wunused-parameter"
int main(int argc, char* argv[]) {
  clear_screen();
  intro();
  flush_screen();

  return 0;
}
