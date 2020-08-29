#include <stdio.h>

int main(int argc, char* argv[])
{
	unsigned int a = 0x20;
	int b = 0x12345678;
	printf("%#x\n", b);
	printf("%ld\n", sizeof(b));
	a = a>>2;
	a = ~a;
	printf("%d, %d\n",a,b);
	return 0;
}
