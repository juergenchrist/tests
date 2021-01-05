all: main

test: main
	./main

clean:
	rm -f ./main

.PHONY: all test clean
