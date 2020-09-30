#include <stdio.h>
<<<<<<< HEAD

int main(int argc, char * argv[])
{
	FILE * fa, * fb;
	int ch;
	fb = fopen("b.txt","w");
	if (NULL==(fa=fopen("a.txt", "r")))
	{
		perror("file not exist");
	}
	printf("hello world\n");
	while(EOF !=(ch=fgetc(fa)))
	{
		fputc(ch, fb);
	}
	fclose(fa);
	fclose(fb);

=======
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
>>>>>>> 297974c684eebad1c68e50f7280743728d3c1b45
	return 0;
}
