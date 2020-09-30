#include <stdio.h>
#define N 20
int main(int argc, char * argv[])
{
	char a[][N] = {"apple", "peach", "banana","orange"};
	int n = sizeof(a)/sizeof(a[1]);
	printf("n=%d\n", n);
	int i;
	for(i=0;i<n;i++)
	{
		printf("%s\n", a[i]);
	}
	return 0;
}
