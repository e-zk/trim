# trim (POSIX) Makefile
.POSIX:
.SUFFIXES: .c .o

include config.mk

BINPATH = $(PREFIX)/bin/$(BIN)

# by default, build
all: $(BIN)

# install
install:$(BIN)
	[ ! -f $(BINPATH) ] || rm -i $(BINPATH)
	cp $(BIN) $(BINPATH)
	chmod +x $(BINPATH)

# clean up
clean:
	-rm $(BIN) *.core
