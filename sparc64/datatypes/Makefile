TARGET    = sparc64-linux-gnu
CC        = $(TARGET)-gcc
LD        = $(TARGET)-ld
AR        = $(TARGET)-ar
NM        = $(TARGET)-nm
RANLIB    = $(TARGET)-ranlib

SRC_DIR     = ../../datatypes
CFLAGS      = -I../libbo/include
LDFLAGS     = -L../libbo/lib -lbo -static
LDFLAGS32   = -L../libbo/lib32 -lbo -static

PROGRAMS    = integer_test.out integer_test32.out \
		float_test.out float_test32.out base2.out

.PHONY: all clean

all: $(PROGRAMS)

integer_test.out: $(SRC_DIR)/integer_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

integer_test32.out: $(SRC_DIR)/integer_test.c
	$(CC) $(CFLAGS) -m32 -o $@ $< $(LDFLAGS32)

float_test.out: $(SRC_DIR)/float_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

float_test32.out: $(SRC_DIR)/float_test.c
	$(CC) $(CFLAGS) -m32 -o $@ $< $(LDFLAGS32)

base2.out: $(SRC_DIR)/base2.c
	$(CC) $(CFLAGS) -m32 -o $@ $< $(LDFLAGS32)

clean:
	rm -f $(PROGRAMS) *.o *.a
