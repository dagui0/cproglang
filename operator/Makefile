
SRC_DIR     = .
CFLAGS      = -I../libchomp/include  # -Wno-unsequenced
LDFLAGS     = -L../libchomp/lib -lchomp


PROGRAMS    = op_test

.PHONEY: all clean

all: $(PROGRAMS)

op_test: $(SRC_DIR)/op_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS) 

clean:
	rm -f $(PROGRAMS) *.o *.a
