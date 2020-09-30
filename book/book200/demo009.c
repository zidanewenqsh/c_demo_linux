
#include <stdio.h>


int leap(int month);

int number(int year, int month, int day);

int main(int argc, char* argv[])
{
	int year, month, day, n, result;
	puts("input:");
	scanf("%d%d%d", &year,&month, &day);
	printf("year=%d, month=%d, day=%d\n", year, month, day);
	n = number(year, month, day);
	printf("n=%d\n", n);
	result = 1 ? (n==1 || n==2 || n==3) : 0;
	printf("result:%d\n", result);

	return 0;
}
int leap(int year)
{
	if (((year%4==0) && (year%100!=0)) || (year%400==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int number(int year, int month, int day)
{
	int n=0, i, j;
	int a[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	int b[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if (leap(year))
	{
		for (i=0;i<month-1;i++)
		{
			n+=a[i];
		}
	}
	else
	{
		for (i=0;i<month-1;i++)
		{
			n+=b[i];
		}
	}
	n+=day;
	for (j=2011;j<year;j++)
	{
		if (leap(j))
		{
			n+=366;
		}
		else
		{
			n+=365;
		}
	}
       	return n;	
}
