#include <stdio.h>
#include <stdlib.h>
#define BUFFSIZE 1024
int main(int argc, char* argv[])
{
	FILE *fa, *fb;
	int n;
	char buff[BUFFSIZE];
	if (NULL==(fa=fopen("a.txt","r")))
	{
		perror("src file open error");
		return -1;
	}
	if (NULL==(fb=fopen("b.txt","w")))
	{
		perror("dst file open error");
		return -1;
	}
	while((n=fread(buff, sizeof(char), sizeof(buff), fa))>0)
	{
		fwrite(buff, sizeof(char), n, fb);	
	}
	fclose(fa);
	fclose(fb);
	return 0;
}
