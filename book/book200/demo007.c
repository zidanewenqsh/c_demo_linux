#include <stdio.h>
int main(int argc, char* argv[])
{
	int a, b, c;
	for (a=1;a<=3;a++)
		for (b=1;b<=3;b++)
			for (c=1;c<=3;c++)
				if (a!=1 && c!=1 && c!=3 && a!=b && a!=c && b!=c)
				{
					printf("%d-1\n",a);
					printf("%d-2\n",b);
					printf("%d-3\n",c);
				}
	return 0;
}
