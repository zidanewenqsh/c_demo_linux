#include <stdio.h>
int main(int argc, char* argv[])
{
	int cock, hen, chicken;
	for (cock=0;cock<=20;cock++)
	{
		for (hen=0;hen<=33-cock;hen++)
		{
			chicken = 100-cock-hen;

			if (chicken%3==0)
			{
				if ((5*cock+3*hen+chicken/3)==100)
				{
					printf("cock:%d, hen:%d, chicken:%d\n", cock, hen, chicken);
				}

			}
		}

	}
	return 0;
}
