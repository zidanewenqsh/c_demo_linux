#include <stdio.h>

int main(int argc, char * argv[])
{
//	int a = 100;
	int arr[3] = {1,2,3};
//	int * p = &a;
	printf("p=%p,%p,sizeofp=%ld, %ld\n", arr, (char *)&arr, sizeof(arr), sizeof((char *) &arr));

	return 0;
}
