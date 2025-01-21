
SRC_DIR     = .
CFLAGS      = -I../libchomp/include
LDFLAGS     = -L../libchomp/lib -lchomp


PROGRAMS    = fgets_test getchar_test scanf_test

.PHONEY: all clean

all: $(PROGRAMS)

fgets_test: $(SRC_DIR)/fgets_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS) 

getchar_test32: $(SRC_DIR)/getchar_test.c
	$(CC) $(CFLAGS) -o $@ $<  $(LDFLAGS)

scanf_test: $(SRC_DIR)/scanf_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

clean:
	rm -f $(PROGRAMS) *.o *.a
