OS          = $(shell uname -o)

SRC_DIR     = .
CFLAGS      = -I../libchomp/include  # -Wno-unsequenced
LDFLAGS     = -L../libchomp/lib -lchomp

ifeq ($(OS), Cygwin)
OUTEXT      = exe
else ifeq ($(OS), Msys)
OUTEXT      = exe
else
OUTEXT      = out
endif

PROGRAMS    = op_test.$(OUTEXT)

.PHONY: all clean

all: $(PROGRAMS)

op_test.$(OUTEXT): $(SRC_DIR)/op_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS) 

clean:
	rm -f $(PROGRAMS) *.o *.a
