#include <stdio.h>

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

	return 0;
}
