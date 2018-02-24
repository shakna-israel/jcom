#ifndef JCOM_CROSS

// Cross platform include for Sleep/usleep
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
#include <Windows.h>
#else
#include <unistd.h>
#endif

void clearscr(void);
void clearscr() {
  // Clear the host OS terminal
  #if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
  system("cls"); // Clears console by shelling out. Win10 supports ANSI codes, but nothing else does, so
                 // Windows can stay a second-class citizen for now.
  #else
  printf("%s", "\033[2J\033[1;1H"); // Clears terminal with ANSI codes.
  #endif
}

void sleepn(int millis);
void sleepn(int millis) {
  // Sleep for number of milliseconds
  #if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
  Sleep(millis);
  #else
  usleep((useconds_t)millis*1000);
  #endif
}

#define JCOM_CROSS
#endif
