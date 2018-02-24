CC=gcc-7
CSTD=-std=c99
CFLAGS=-Wpedantic -Wall -Wextra
OPTIM=-O3
PROGNAME=jcom
BUILDDIR=build

all: main.c
	-rm-rf $(BUILDDIR)
	-mkdir $(BUILDDIR)
	$(CC) -Werror $(CFLAGS) $(CSTD) -o $(BUILDDIR)/$(PROGNAME) main.c $(OPTIM)

debug: main.c
	$(CC) $(CFLAGS) $(CSTD) -o $(BUILDDIR)$(PROGNAME) main.c

.PHONY: clean

clean:
	rm $(BUILDDIR)/$(PROGNAME)
	rm -rf $(BUILDDIR)
