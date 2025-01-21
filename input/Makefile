
SRC_DIR     = .
CFLAGS      = -I../libchomp/include
LDFLAGS     = -L../libchomp/lib -lchomp


PROGRAMS    = fgets_test.out getchar_test.out scanf_test.out

.PHONEY: all clean

all: $(PROGRAMS)

fgets_test.out: $(SRC_DIR)/fgets_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS) 

getchar_test.out: $(SRC_DIR)/getchar_test.c
	$(CC) $(CFLAGS) -o $@ $<  $(LDFLAGS)

scanf_test.out: $(SRC_DIR)/scanf_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

clean:
	rm -f $(PROGRAMS) *.o *.a
