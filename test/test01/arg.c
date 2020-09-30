#include <stdio.h>

int main(int argc, char * argv[])
{
	int i;
	printf("argc: %d\n", argc);

	for (i=0;i<argc;i++)
	{
		printf("%s\n",argv[i]);
	}
	while(argc>=1)
	{
		printf("%s\n", *argv++);
		argc--;
	}
	printf("hello world\n");
	return 0;
}
