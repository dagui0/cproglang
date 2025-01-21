DIRS = libbo datatypes

.PHONY: all clean

all:
	for d in $(DIRS); do \
	  $(MAKE) -C $$d $@ || break; \
	done
clean:
	for d in $(DIRS); do \
	  $(MAKE) -C $$d $@ || break; \
	done
