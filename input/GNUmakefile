OS          = $(shell uname -o)

SRC_DIR     = .
CFLAGS      = -I../libchomp/include
LDFLAGS     = -L../libchomp/lib -lchomp

ifeq ($(OS), Cygwin)
OUTEXT      = exe
else ifeq ($(OS), Msys)
OUTEXT      = exe
else
OUTEXT      = out
endif

PROGRAMS    = fgets_test.$(OUTEXT) getchar_test.$(OUTEXT) scanf_test.$(OUTEXT)

.PHONY: all clean

all: $(PROGRAMS)

fgets_test.$(OUTEXT): $(SRC_DIR)/fgets_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS) 

getchar_test.$(OUTEXT): $(SRC_DIR)/getchar_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

scanf_test.$(OUTEXT): $(SRC_DIR)/scanf_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

clean:
	rm -f $(PROGRAMS) *.o *.a
