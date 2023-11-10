#include <stdio.h>

int main(void)
{
	int max = 10000;
	for (int i = 1; i <= 10000; i++)
	{
		if (i % 13 == 0)
		{
			printf("%d\n", i);
		}
		else if (i % 17 == 0)
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}
