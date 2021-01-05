#include <stdio.h>

int main(void)
{
	const int x = 1;
	puts(*((char *)&x) == 1 ? "little endian" : "big endian");
	return 0;
}
