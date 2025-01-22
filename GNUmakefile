HAS_SPARC = $(shell which sparc64-linux-gnu-gcc)

DIRS = libbo datatypes libhello hello libchomp input operator pointer

ifeq "$(HAS_SPARC)" ''
TARGET_DIRS = $(DIRS)
else
TARGET_DIRS = $(DIRS) sparc64
endif

.PHONY: all clean

all:
	for d in $(TARGET_DIRS); do \
	  $(MAKE) -C $$d $@ || break; \
	done
clean:
	for d in $(TARGET_DIRS); do \
	  $(MAKE) -C $$d $@ || break; \
	done
