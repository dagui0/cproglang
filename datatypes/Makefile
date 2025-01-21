OS          = $(shell uname -s)

SRC_DIR     = .
CFLAGS      = -I../libbo/include
LDFLAGS     = -L../libbo/lib -lbo
LDFLAGS32   = -L../libbo/lib32 -lbo


PROGRAMS    = integer_test.out float_test.out
PROGRAMS32  = integer_test.32.out float_test.32.out

.PHONEY: all clean

ifeq ($(OS), Darwin)
all: $(PROGRAMS) 
else
all: $(PROGRAMS) $(PROGRAMS32)
endif

integer_test.out: $(SRC_DIR)/integer_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS) 

integer_test.32.out: $(SRC_DIR)/integer_test.c
	$(CC) $(CFLAGS) -m32 -o $@ $<  $(LDFLAGS32)

float_test.out: $(SRC_DIR)/float_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

float_test.32.out: $(SRC_DIR)/float_test.c
	$(CC) $(CFLAGS) -m32 -o $@ $< $(LDFLAGS32)

clean:
	rm -f $(PROGRAMS) $(PROGRAMS32) *.o *.a
