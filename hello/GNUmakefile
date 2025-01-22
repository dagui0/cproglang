OS          = $(shell uname -o)

SRC_DIR     = .
CFLAGS      = -I../libhello/include
LDFLAGS     = -L../libhello/lib -lhello

ifeq ($(OS), Cygwin)
OUTEXT      = exe
else ifeq ($(OS), Msys)
OUTEXT      = exe
else
OUTEXT      = out
endif

PROGRAMS    = hello.$(OUTEXT)

.PHONY: all clean

all: $(PROGRAMS)

hello.$(OUTEXT): $(SRC_DIR)/hello.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS) 

clean:
	rm -f $(PROGRAMS) *.o *.a
