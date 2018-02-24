CC=gcc-7
CFLAGS=-Wpedantic -Wall -Wextra
OPTIM=-O3
PROGNAME=jcom
BUILDDIR=build

all: main.c
	-rm-rf $(BUILDDIR)
	-mkdir $(BUILDDIR)
	$(CC) -Werror $(CFLAGS) -o $(BUILDDIR)/$(PROGNAME) main.c $(OPTIM)

debug: main.c
	$(CC) $(CFLAGS) -o $(BUILDDIR)$(PROGNAME) main.c

.PHONY: clean

clean:
	rm $(BUILDDIR)/$(PROGNAME)
	rm -rf $(BUILDDIR)
