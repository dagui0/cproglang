
SRC_DIR     = .
CFLAGS      = -I../libchomp/include  # -Wno-unsequenced
LDFLAGS     = -L../libchomp/lib -lchomp


PROGRAMS    = op_test.out

.PHONEY: all clean

all: $(PROGRAMS)

op_test.out: $(SRC_DIR)/op_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS) 

clean:
	rm -f $(PROGRAMS) *.o *.a
