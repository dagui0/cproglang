DIRS = libbo datatypes libhello hello \
	libchomp input \
	sparc64

.PHONEY: all clean

all:
	for d in $(DIRS); do \
	  $(MAKE) -C $$d $@ || break; \
	done
clean:
	for d in $(DIRS); do \
	  $(MAKE) -C $$d $@ || break; \
	done
