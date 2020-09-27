#include <stdio.h>
#include <stdlib.h>
extern int add(int, int);
int main(int argc, char* argv[])
{
	int a = 1, b = 3, c;
	c = add(a,b);
//	c = 5;
	printf("c=%d\n",c);
	return 0;
}
