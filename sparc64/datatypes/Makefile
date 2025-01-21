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

PROGRAMS    = integer_test integer_test32 float_test float_test32

.PHONEY: all clean

all: $(PROGRAMS)

integer_test: $(SRC_DIR)/integer_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

integer_test32: $(SRC_DIR)/integer_test.c
	$(CC) $(CFLAGS) -m32 -o $@ $< $(LDFLAGS32)

float_test: $(SRC_DIR)/float_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

float_test32: $(SRC_DIR)/float_test.c
	$(CC) $(CFLAGS) -m32 -o $@ $< $(LDFLAGS32)

clean:
	rm -f $(PROGRAMS) *.o *.a
