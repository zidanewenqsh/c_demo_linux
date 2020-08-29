#include <stdio.h>
#include <string.h>
#define N 30
int main(int argc, char * argv[])
{
	char dst[N];
	char dst2[N];
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

	m = strcmp(src,dst);
	printf("m=%d\n", m);
	strncpy(dst2,src,5);
	dst2[5] = '\0';
//    strcat(dst2,'\0');
	m = strcmp(src,dst2);
	printf("m=%d\n", m);
	m = strncmp(src,dst2, 5);
	printf("m=%d\n", m);

    m = strcmp("helloworld","hello");
    printf("cmp=%d\n",m);
    printf("dst2=%s\n",dst2);
    printf("src=%s\n",src);
    printf("dst=%s\n",dst);

}
