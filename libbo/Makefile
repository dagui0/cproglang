OS        = $(shell uname -s)

NM        = nm
RANLIB    = ranlib

SRC_DIR   = .
.if $(OS) == Darwin
LIBS      = lib/libbo.a
.else
LIBS      = lib/libbo.a lib32/libbo.a
.endif
HEADERS   = include/bo.h
OBJS      = lib/bo_print.o
OBJS32    = lib32/bo_print.o

CFLAGS = -I$(SRC_DIR)/include

.PHONY: all clean nm

all: $(LIBS)

lib/libbo.a: $(OBJS)
	mkdir -p lib && \
	$(AR) crv $@ $(OBJS) && \
	$(RANLIB) $@

lib/bo_print.o: $(SRC_DIR)/src/bo_print.c $(HEADERS)
	mkdir -p lib && \
	$(CC) $(CFLAGS) -c -o $@ $(SRC_DIR)/src/bo_print.c

lib32/libbo.a: $(OBJS32) 
	mkdir -p lib32 && \
	$(AR) crv $@ $(OBJS32) && \
	$(RANLIB) $@

lib32/bo_print.o: $(SRC_DIR)/src/bo_print.c $(HEADERS)
	mkdir -p lib32 && \
	$(CC) $(CFLAGS) -m32 -c -o $@ $(SRC_DIR)/src/bo_print.c

nm: $(LIBS)
	for a in $(LIBS); do \
	  echo $$a; \
	  $(NM) $$a; \
	done

clean:
	rm -rf lib lib32
