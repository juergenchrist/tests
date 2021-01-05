all: main

test: main
	uname -a
	./main

clean:
	rm -f ./main

.PHONY: all test clean
