#include <stdio.h>

int main(int argc, char * argv[])
{
	int a = 100;
	int * p = &a;
	printf("p=%p,%#x,sizeofp=%ld\n", p,p, sizeof(p));
	printf("a=%d, %o, %#x\n",a,a,a);
	return 0;
}
