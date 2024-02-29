
OUTPUT_OPTION = -MMD -MD -o $@
SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.o)
DEPS = $(SRC:.c=.d)
-include ${DEPS}

all: TicTacZap

.PHONY: test-build
test-build: TicTacZap clean

TicTacZAP: ${OBJS}
	$(CC) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o
	rm -f TicTacZap
