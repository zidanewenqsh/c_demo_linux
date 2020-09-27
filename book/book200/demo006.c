#include <stdio.h>


int leap(int month);

int number(int year, int month, int day);

int main(int argc, char* argv[])
{
	int year, month, day, sum;
	puts("input:");
	scanf("%d%d%d", &year, &month, &day);
	printf("year=%d, month=%d, day=%d\n", year, month, day);
	sum = number(year, month, day);
	printf("sum=%d\n", sum);
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
	int sum=0, i;
	int a[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	int b[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if (leap(year))
	{
		for (i=0;i<month-1;i++)
		{
			sum+=a[i];
		}
	}
	else
	{
		for (i=0;i<month-1;i++)
		{
			sum+=b[i];
		}
	}
	sum+=day;
       	return sum;	
}
