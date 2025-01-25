
SRC_DIR     = .
CFLAGS      =
LDFLAGS     =

OUTEXT      = out
PROGRAMS    = op_test.$(OUTEXT) op_precedence.$(OUTEXT) compound_literal.$(OUTEXT)

.PHONY: all clean

all: $(PROGRAMS)

op_test.$(OUTEXT): $(SRC_DIR)/op_test.c
	$(CC) $(CFLAGS) -o $@ $(SRC_DIR)/op_test.c $(LDFLAGS) 
op_precedence.$(OUTEXT): $(SRC_DIR)/op_precedence.c
	$(CC) $(CFLAGS) -o $@ $(SRC_DIR)/op_precedence.c $(LDFLAGS) 
compound_literal.$(OUTEXT): $(SRC_DIR)/compound_literal.c
	$(CC) $(CFLAGS) -o $@ $(SRC_DIR)/compound_literal.c $(LDFLAGS)
eval_order.$(OUTEXT): $(SRC_DIR)/eval_order.c
	$(CC) $(CFLAGS) -o $@ $(SRC_DIR)/eval_order.c $(LDFLAGS)

clean:
	rm -f $(PROGRAMS) *.o *.a
