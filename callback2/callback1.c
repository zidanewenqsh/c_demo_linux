#include <stdio.h>
void callback1(int n);
void callback2(int n);
void callback3(int n);
void handle(int n, void (*callback)(int));
int main(int argc, char * argv[])
{
	int n = 10;
	handle(n,callback1);
	handle(n,callback2);
	handle(n,callback3);
	return 0;
}
void handle(int n, void (*callback)(int))
{
	callback(n);
}
void callback1(int n)
{
	printf("n=%d\n", n);
}
void callback2(int n)
{
	printf("n=%d\n", n*n);
}
void callback3(int n)
{
	printf("n=%d\n", n*n*n);
}
