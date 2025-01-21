
SRC_DIR     = .
CFLAGS      = -I../libhello/include
LDFLAGS     = -L../libhello/lib -lhello


PROGRAMS    = hello.out

.PHONEY: all clean

all: $(PROGRAMS)

hello.out: $(SRC_DIR)/hello.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS) 

clean:
	rm -f $(PROGRAMS) *.o *.a
