OS          = $(shell uname -s)

SRC_DIR     = .
CFLAGS      = -I../libbo/include 
CXXFLAGS    = -I../libbo/include 
LDFLAGS     = -L../libbo/lib -lbo
LDFLAGS32   = -L../libbo/lib32 -lbo

OUTEXT      = out

PROGRAMS    = integer_test.$(OUTEXT) float_test.$(OUTEXT) volatile_type.$(OUTEXT) \
				lvalue.$(OUTEXT)
PROGRAMS32  = integer_test.32.$(OUTEXT) float_test.32.$(OUTEXT) volatile_type.32.$(OUTEXT) \
				lvalue.32.$(OUTEXT)

.PHONY: all clean

all: $(PROGRAMS) $(PROGRAMS32)

integer_test.$(OUTEXT): $(SRC_DIR)/integer_test.c
	$(CC) $(CFLAGS) -m64 -o $@ $(SRC_DIR)/integer_test.c $(LDFLAGS) 
integer_test.32.$(OUTEXT): $(SRC_DIR)/integer_test.c
	$(CC) $(CFLAGS) -m32 -o $@ $(SRC_DIR)/integer_test.c  $(LDFLAGS32)

float_test.$(OUTEXT): $(SRC_DIR)/float_test.c
	$(CC) $(CFLAGS) -m64 -o $@ $(SRC_DIR)/float_test.c $(LDFLAGS)
float_test.32.$(OUTEXT): $(SRC_DIR)/float_test.c
	$(CC) $(CFLAGS) -m32 -o $@ $(SRC_DIR)/float_test.c $(LDFLAGS32)

volatile_type.$(OUTEXT): $(SRC_DIR)/volatile_type.c
	$(CC) $(CFLAGS) -m64 -o $@ $(SRC_DIR)/volatile_type.c $(LDFLAGS)
volatile_type.32.$(OUTEXT): $(SRC_DIR)/volatile_type.c
	$(CC) $(CFLAGS) -m32 -o $@ $(SRC_DIR)/volatile_type.c $(LDFLAGS32)

lvalue.$(OUTEXT): $(SRC_DIR)/lvalue.cpp
	$(CXX) $(CXXFLAGS) -m64 -o $@ $< $(LDFLAGS)
lvalue.32.$(OUTEXT): $(SRC_DIR)/lvalue.cpp
	$(CXX) $(CXXFLAGS) -m32 -o $@ $< $(LDFLAGS32)

clean:
	rm -f $(PROGRAMS) $(PROGRAMS32) *.o *.a
