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
	FILE *fps, *fpd;
	int ch;
	char buff[BUFFSIZE];
	if (NULL==(fps=fopen(argv[1],"r")))
	{
		perror("src file open error");
		return -1;
	}
	if (NULL==(fpd=fopen(argv[2],"w")))
	{
		perror("dst file open error");
		return -1;
	}
	while(EOF!=(ch=fgetc(fps)))
	{
		fputc(ch, fpd);
	}
	fclose(fps);
	fclose(fpd);
	return 0;
}
