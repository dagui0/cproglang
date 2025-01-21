TARGET    = sparc64-linux-gnu
CC        = $(TARGET)-gcc
LD        = $(TARGET)-ld
AR        = $(TARGET)-ar
NM        = $(TARGET)-nm
RANLIB    = $(TARGET)-ranlib

SRC_DIR   = ../../libbo

LIBS      = lib/libbo.a lib32/libbo.a
HEADERS   = include/bo.h
OBJS      = lib/bo_print.o
OBJS32    = lib32/bo_print.o

CFLAGS    = -I./include

.PHONEY: all clean nm

all: $(LIBS)

include/bo.h: $(SRC_DIR)/include/bo.h
	mkdir -p include && \
	cp $< $@

lib/libbo.a: $(OBJS)
	mkdir -p lib && \
	$(AR) crv $@ $(OBJS) && \
	$(RANLIB) $@

lib/bo_print.o: $(SRC_DIR)/src/bo_print.c $(HEADERS)
	mkdir -p lib && \
	$(CC) $(CFLAGS) -c -o $@ $<

lib32/libbo.a: $(OBJS32)
	mkdir -p lib32 && \
	$(AR) crv $@ $(OBJS32) && \
	$(RANLIB) $@

lib32/bo_print.o: $(SRC_DIR)/src/bo_print.c $(HEADERS)
	mkdir -p lib32 && \
	$(CC) $(CFLAGS) -m32 -c -o $@ $<

nm: $(LIBS)
	for a in $(LIBS); do \
	  echo $$a; \
	  $(NM) $$a; \
	done

clean:
	rm -rf lib lib32 include
