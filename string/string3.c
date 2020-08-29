#include <stdio.h>
#include <string.h>
#define N 30
int main(int argc, char * argv[])
{
	char dst[N];
	char src[] = "helloworld";
	strcpy(dst, src);
	int n = strlen(dst);
	printf("n=%d\n",n);
	int i;
	for (i=0;i<n;i++)
	{
		putchar(dst[i]);
	}
	putchar('\n');
	int m;

	m = strcmp(src,dst);
	printf("m=%d\n", m);

	strcat(dst, src);
	printf("dst=%s\n",dst);
	m = strcmp(src,dst);
	printf("m=%d\n", m);
}
