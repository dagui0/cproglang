
SRC_DIR     = .
CFLAGS      = -I../libchomp/include
LDFLAGS     = -L../libchomp/lib -lchomp


PROGRAMS    = fgets_test.out getchar_test.out scanf_test.out

.PHONY: all clean

all: $(PROGRAMS)

fgets_test.out: $(SRC_DIR)/fgets_test.c
	$(CC) $(CFLAGS) -o $@ $(SRC_DIR)/fgets_test.c $(LDFLAGS) 

getchar_test.out: $(SRC_DIR)/getchar_test.c
	$(CC) $(CFLAGS) -o $@ $(SRC_DIR)/getchar_test.c $(LDFLAGS)

scanf_test.out: $(SRC_DIR)/scanf_test.c
	$(CC) $(CFLAGS) -o $@ $(SRC_DIR)/scanf_test.c $(LDFLAGS)

clean:
	rm -f $(PROGRAMS) *.o *.a
