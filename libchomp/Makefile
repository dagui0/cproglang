NM        = nm
RANLIB    = ranlib

SRC_DIR   = .
LIBS      = lib/libchomp.a
HEADERS   = $(SRC_DIR)/include/chomp.h
OBJS      = lib/chomp.o

CFLAGS = -I$(SRC_DIR)/include

.PHONY: all clean nm

all: $(LIBS)

lib/libchomp.a: $(OBJS)
	mkdir -p lib && \
	$(AR) crv $@ $(OBJS) && \
	$(RANLIB) $@

lib/chomp.o: $(SRC_DIR)/src/chomp.c $(HEADERS)
	mkdir -p lib && \
	$(CC) $(CFLAGS) -c -o $@ $(SRC_DIR)/src/chomp.c

nm: $(LIBS)
	for a in $(LIBS); do \
	  echo $$a; \
	  $(NM) $$a; \
	done

clean:
	rm -rf lib 
