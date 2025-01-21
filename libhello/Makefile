NM        = nm
RANLIB    = ranlib

SRC_DIR   = .
LIBS      = lib/libhello.a
HEADERS   = $(SRC_DIR)/include/hello.h
OBJS      = lib/hello_func.o

CFLAGS = -I$(SRC_DIR)/include

.PHONY: all clean nm

all: $(LIBS)

lib/libhello.a: $(OBJS)
	mkdir -p lib && \
	$(AR) crv $@ $(OBJS) && \
	$(RANLIB) $@

lib/hello_func.o: $(SRC_DIR)/src/hello_func.c $(HEADERS)
	mkdir -p lib && \
	$(CC) $(CFLAGS) -c -o $@ $(SRC_DIR)/src/hello_func.c

nm: $(LIBS)
	for a in $(LIBS); do \
	  echo $$a; \
	  $(NM) $$a; \
	done

clean:
	rm -rf lib
