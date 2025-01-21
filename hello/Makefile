
SRC_DIR     = .
CFLAGS      = -I../libhello/include
LDFLAGS     = -L../libhello/lib -lhello


PROGRAMS    = hello

.PHONEY: all clean

all: $(PROGRAMS)

hello: $(SRC_DIR)/hello.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS) 

clean:
	rm -f $(PROGRAMS) *.o *.a
