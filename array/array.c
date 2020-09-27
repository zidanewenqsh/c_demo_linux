#include <stdio.h>

int main(int argc, char * argv[])
{
	int arr[3][2] = {1,2,3,4,5,6};
	int (*p)[2];
	p = arr;
	return 0;
}
