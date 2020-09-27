#include <stdio.h>

int main(int argc, char * argv[])
{
	printf("hello world\n");
	int i, j;
	int arr[] = {6,4,8,3,9,1,2,7,0,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("n=%d\n", n);
	for(i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	int temp;
	for (i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

	for(i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
