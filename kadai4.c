#include <stdio.h>

int main(void)
{
	char a;

	printf("Please Enter Number: ");
	scanf_s("%c", &a);


	if ((a >= 'a')&&(a <= 'z'))
	{
		printf("小文字\n");
	}
	else if((a>='A')&&(a<='Z'))
	{
		printf("大文字を含む\n");
	}
	else
	{
		printf("その他\n");
	}

	return 0;
} 
