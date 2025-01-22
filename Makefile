TARGET_DIRS = libbo datatypes libhello hello libchomp input operator pointer

.PHONY: all clean

all:
	for d in $(TARGET_DIRS); do \
	  if [ `uname -s` = 'SunOS' -a -f $$d/Makefile.sun ]; then \
	    MK='-f Makefile.sun'; \
	  else \
	    MK=; \
	  fi; \
	  (cd $$d; $(MAKE) $$MK $@) || break; \
	done
clean:
	for d in $(TARGET_DIRS); do \
	  if [ `uname -s` = 'SunOS' -a -f $$d/Makefile.sun ]; then \
	    MK='-f Makefile.sun'; \
	  else \
	    MK=; \
	  fi; \
	  (cd $$d; $(MAKE) $$MK $@) || break; \
	done
