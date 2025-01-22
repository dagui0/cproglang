
SRC_DIR     = .
CFLAGS      =
LDFLAGS     =

OUTEXT      = out
PROGRAMS    = dangling.$(OUTEXT)

.PHONY: all clean

all: $(PROGRAMS)

dangling.$(OUTEXT): $(SRC_DIR)/dangling.c
	$(CC) $(CFLAGS) -o $@ $(SRC_DIR)/dangling.c $(LDFLAGS) 

clean:
	rm -f $(PROGRAMS) *.o *.a
