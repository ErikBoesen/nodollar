all: compile

compile:
	mkdir -p build
	gcc -o build/$$ nodollar.c
install:
	install build/$$ /usr/local/bin
