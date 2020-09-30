#include <stdio.h>

int main(int argc, char * argv[])
{
	int arr[3][2] = {1,2,3,4,5,6};
	int (*p)[2];
	p = arr;
	int i,j,m,n;
	m = sizeof(arr)/sizeof(arr[0]);
	n = sizeof(arr[0])/sizeof(int);
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d ", arr[i][j]);
		}
		putchar('\n');
	}
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d ", p[i][j]);
		}
		putchar('\n');
	}
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d ", *(*(p+i)+j));
		}
		putchar('\n');
	}
	return 0;
}
