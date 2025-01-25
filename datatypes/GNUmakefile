OS          = $(shell uname -o)
OSID        = $(shell grep '^ID=' /etc/os-release)

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

PROGRAMS    = integer_test.$(OUTEXT) float_test.$(OUTEXT) volatile_type.$(OUTEXT)
PROGRAMS32  = integer_test.32.$(OUTEXT) float_test.32.$(OUTEXT) volatile_type.32.$(OUTEXT)

ALL_TARGETS  =
ifeq ($(OS), Darwin)
ALL_TARGETS  = $(PROGRAMS)
else ifeq ($(OS), Cygwin)
ALL_TARGETS  = $(PROGRAMS)
else ifeq ($(OS), Msys)
ifeq ($(MSYSTEM), MINGW32)
ALL_TARGETS  = $(PROGRAMS32)
else
ALL_TARGETS  = $(PROGRAMS)
endif
else ifeq ($(OSID), ID=alpine)
ALL_TARGETS  = $(PROGRAMS)
else
ALL_TARGETS  = $(PROGRAMS) $(PROGRAMS32)
endif

.PHONY: all clean

all: $(ALL_TARGETS)

integer_test.$(OUTEXT): $(SRC_DIR)/integer_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS) 
integer_test.32.$(OUTEXT): $(SRC_DIR)/integer_test.c
	$(CC) $(CFLAGS) -m32 -o $@ $<  $(LDFLAGS32)

float_test.$(OUTEXT): $(SRC_DIR)/float_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
float_test.32.$(OUTEXT): $(SRC_DIR)/float_test.c
	$(CC) $(CFLAGS) -m32 -o $@ $< $(LDFLAGS32)

volatile_type.$(OUTEXT): $(SRC_DIR)/volatile_type.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
volatile_type.32.$(OUTEXT): $(SRC_DIR)/volatile_type.c
	$(CC) $(CFLAGS) -m32 -o $@ $< $(LDFLAGS32)

clean:
	rm -f $(PROGRAMS) $(PROGRAMS32) *.o *.a

check:
	echo \"$(OS)\"
