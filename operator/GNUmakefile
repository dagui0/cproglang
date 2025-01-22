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

PROGRAMS    = op_test.$(OUTEXT) op_precedence.$(OUTEXT) compound_literal.$(OUTEXT)

.PHONY: all clean

all: $(PROGRAMS)

op_test.$(OUTEXT): $(SRC_DIR)/op_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS) 
op_precedence.$(OUTEXT): $(SRC_DIR)/op_precedence.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
compound_literal.$(OUTEXT): $(SRC_DIR)/compound_literal.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

clean:
	rm -f $(PROGRAMS) *.o *.a
