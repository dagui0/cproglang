OUTEXT = out
SRC_DIR = .

PROGRAMS = oldc.$(OUTEXT)

.PHONY: all clean

all: $(PROGRAMS)

oldc.$(OUTEXT): $(SRC_DIR)/oldc.c
	$(CC) -o $@ $(SRC_DIR)/oldc.c

clean:
	rm -f $(PROGRAMS) *.o *.a
