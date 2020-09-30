#include <stdio.h>

int main(int argc, char * argv[])
{
	printf("hello world\n");
	char a[] = "hello";
	int n = sizeof(a)/sizeof(char);
	printf("n=%d\n", n);
	int i;
	for(i=0;i<n;i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return 0;
}
