# JCOM

---

JCOM is a "fantasy computer", a silly little virtual machine that emulates the behaviour of an imagined computer, without really worrying about the underlying hardware.

It's closer to game than anything else.

---

# Status: Alpha

JCOM isn't ready yet, and is untested on Windows.

I've finished the main parts of the screen, but haven't built the filesystem or user-interaction or local programming language, yet.

---

# Requirements

---

## Building

A C-compiler, and make.

---

## Running

### Windows

Nothing extra is required.

Note: JCOM will likely be slower on Windows, because of some of the strangeness required to make it work.

### Linux, macOS

An ANSI-compliant terminal is needed, to properly blank the screen.

A few examples of ANSI compliant terminals, at least for JCOM's purposes, are:

* iTerm
* xterm
* gnome-terminal
* tilda
* guake
* terminator
* xfce4-terminal
* konsole

---

# Running

Simply run the executable file produced by [building](#Building), in a terminal session.

```
build/jcom
```

For extra immersion, I reccomend running [cool-retro-term](https://github.com/Swordfish90/cool-retro-term) as your terminal emulator.

---

# Building

JCOM is simple, and doesn't require a lot to build it. A C compiler, and make.

```
make
```

---

## Building: Customising

You can override a few things with the Makefile, however.

```CC```, for your C compiler, as the Makefile prefers ```gcc-7```.

```BUILDDIR```, for the build directory, defaulting to ```build```.

```PROGNAME```, the name for the executable produced, usually ```jcom```.

```OPTIM```, the optimisation flag to use when not doing a debug build. Usually ```-O3```.

```CFLAGS```, for the usual compiler flags. (As Clang or other compilers may want other flags than the provided.)

For example:

```
CC=clang CFLAGS="-Werror -Weverything -Wextra" BUILDDIR=assets make all
```

---

## Building: Debug

To run a debug build, run:

```
make debug
```

---

## Building: Cleanup

To cleanup after a build, run:

```
make clean
```

Note: Remember to provide ```BUILDDIR``` and ```PROGNAME```, again if your build used a different value.

---

# LICENSE

[![CC0 License](https://licensebuttons.net/p/zero/1.0/88x31.png)](https://creativecommons.org/publicdomain/zero/1.0/)

To the extent possible under law, James Milne has waived all copyright and related or neighboring rights to [James' JCOM](https://github.com/shakna-israel/jcom). This work is published from: Australia.
