#include <stdio.h>
#include <string.h>
#define N 30
int main(int argc, char * argv[])
{
	char a = '1';
	char *b = "hello";
	char *c = "Hello";
	if (isdigit(a))
    {
        printf("%c is digit\n", a);
    }
	int m;
	m = strcasecmp(b,c);
    printf("m=%d\n", m);
    int i = 0;
    while (c[i]!='\0')
    {
        putchar(tolower(c[i++]));
//        printf("%c",tolower(c[i++]));
//        i++;
    }

}
