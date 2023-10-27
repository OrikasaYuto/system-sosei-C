#include <stdio.h>

int main(void)
{
	int k;
	int a;
	printf("k: ");
	scanf_s ("%d" , &k);
	printf("a:");
	scanf_s("%d", &a);

	printf("k+a=%d", k + a);
	return 0;
}



#include <stdio.h>

int main(void)
{
	int a;
	printf("Enter Number: ");
	scanf_s ("%d" , &a);

	if (a % 2 == 1)
	{
		printf("奇数");
	}
	else
	{
		printf("偶数\n");
	}
	return 0;
}
