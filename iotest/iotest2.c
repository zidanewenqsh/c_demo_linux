#include <stdio.h>
#include <stdlib.h>
#define BUFFERSIZE 4096
int main(int argc, char * argv[])
{
	FILE * fa, * fb;
	int n;
	char buff[BUFFERSIZE];
	if (NULL==(fa=fopen("a.txt", "r")))
	{
		perror("src file open error");
	}
	if (NULL==(fb=fopen("b.txt", "w")))
	{
		perror("dst file open error");
	}

	while(n=fread(buff, sizeof(char), sizeof(buff), fa))
	{
		fwrite(buff, sizeof(char), n, fb);
	}
	fclose(fa);
	fclose(fb);

	return 0;
}
