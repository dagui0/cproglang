OS          = $(shell uname -o)

SRC_DIR     = .
CFLAGS      = -I../libbo/include
LDFLAGS     = -L../libbo/lib -lbo
LDFLAGS32   = -L../libbo/lib32 -lbo

ifeq ($(OS), Cygwin)
OUTEXT      = exe
else ifeq ($(OS), Msys)
OUTEXT      = exe
else
OUTEXT      = out
endif

ifeq ($(OS), Darwin)
PROGRAMS    = integer_test.$(OUTEXT) float_test.$(OUTEXT)
PROGRAM32   =
else ifeq ($(OS), Cygwin)
PROGRAMS    = integer_test.$(OUTEXT) float_test.$(OUTEXT)
PROGRAM32   =
else ifeq ($(OS), Msys)
ifeq ($(MSYSTEM), MINGW32)
PROGRAMS    = 
PROGRAMS32  = integer_test.32.$(OUTEXT) float_test.32.$(OUTEXT)
else
PROGRAMS    = integer_test.$(OUTEXT) float_test.$(OUTEXT)
PROGRAM32   =
endif
else
PROGRAMS    = integer_test.$(OUTEXT) float_test.$(OUTEXT)
PROGRAMS32  = integer_test.32.$(OUTEXT) float_test.32.$(OUTEXT)
endif

.PHONY: all clean

all: $(PROGRAMS) $(PROGRAMS32)

integer_test.$(OUTEXT): $(SRC_DIR)/integer_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS) 

integer_test.32.$(OUTEXT): $(SRC_DIR)/integer_test.c
	$(CC) $(CFLAGS) -m32 -o $@ $<  $(LDFLAGS32)

float_test.$(OUTEXT): $(SRC_DIR)/float_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

float_test.32.$(OUTEXT): $(SRC_DIR)/float_test.c
	$(CC) $(CFLAGS) -m32 -o $@ $< $(LDFLAGS32)

clean:
	rm -f $(PROGRAMS) $(PROGRAMS32) *.o *.a

check:
	echo \"$(OS)\"
