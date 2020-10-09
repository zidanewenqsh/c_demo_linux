#include <stdio.h>

int main(int argc, char * argv[])
{
	int nNum = 0x12345678;
	int n;
	char *p = (char *)&nNum;
	n = (int)(*p);
	printf("size of p:%d, %d, %d\n", sizeof(*p), nNum, *p);
	printf("nNum=%d, %#x,*p=%d\n", nNum, n, n);
	return 0;
}
