OS          = $(shell uname -o)

ifeq ($(OS), Cygwin)
OUTEXT      = exe
else ifeq ($(OS), Msys)
OUTEXT      = exe
else
OUTEXT      = out
endif

SRC_DIR = .

PROGRAMS = oldc.$(OUTEXT)

.PHONY: all clean

all: $(PROGRAMS)

oldc.$(OUTEXT): $(SRC_DIR)/oldc.c
	$(CC) -o $@ $<

clean:
	rm -f $(PROGRAMS) *.o *.a
