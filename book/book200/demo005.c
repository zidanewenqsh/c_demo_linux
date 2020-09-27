#include <stdio.h>
int main(int argc, char* argv[])
{
	int n, i;
	n = 1;
	for (i=0;i<9;i++)
	{
		n = (n+1)*2;
		printf("the %d day, peach remand: %d\n", 9-i, n);	
	}
	printf("n=%d\n", n);
	return 0;
}
