#include <stdio.h>

// Some simple endianness test
int main(void)
{
	const int x = 1;
	int le = *((char *)&x) == 1;
	puts(le ? "little endian" : "big endian");
	return le;
}
