#include <stdio.h>
<<<<<<< HEAD

int main(int argc, char * argv[])
{
	printf("hello world\n");
	return 0;
}
=======
#include <stdlib.h>
#define BUFFSIZE 1024
int main(int argc, char* argv[])
{
	FILE *fps, *fpd;
	char[BUFFSIZE] buff;
	int n, ch;
	if (NULL=(fps=fopen("a.txt","r")))
	{
		perror("src file open error");
		return -1;
	}
	if (NULL=(fpd=fopen("b.txt","w")))
	{
		perror("dst file open error");
		return -1;
	}
	while ((n=fread(buff, sizeof(char), sizeof(buff), fps))>0)
	{
		fwrite(buff, sizeof(char), n, fpd);
	}
	fclose(fps);
	fclose(fpd);
	return 0;
}

>>>>>>> 297974c684eebad1c68e50f7280743728d3c1b45
