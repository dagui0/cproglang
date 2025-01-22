OS          = $(shell uname -o)

SRC_DIR     = .
CFLAGS      =
LDFLAGS     =

ifeq ($(OS), Cygwin)
OUTEXT      = exe
else ifeq ($(OS), Msys)
OUTEXT      = exe
else
OUTEXT      = out
endif

PROGRAMS    = dangling.$(OUTEXT)

.PHONY: all clean

all: $(PROGRAMS)

dangling.$(OUTEXT): $(SRC_DIR)/dangling.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS) 

clean:
	rm -f $(PROGRAMS) *.o *.a
