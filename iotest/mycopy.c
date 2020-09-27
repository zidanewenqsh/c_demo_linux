#include <stdio.h>
#include <stdlib.h>
#define BUFFSIZE 1024
int main(int argc, char* argv[])
{
	if(argc<3)
	{
		printf("Usage: %s <src_file> <dst_file>\n", argv[0]);
		return -1;
	}
	FILE *fa, *fb;
	int n;
	char buff[BUFFSIZE];
	if (NULL==(fa=fopen(argv[1],"r")))
	{
		perror("src file open error");
		return -1;
	}
	if (NULL==(fb=fopen(argv[2],"w")))
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
