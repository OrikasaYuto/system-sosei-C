#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];
	printf("パスワードを入力してください");
	scanf_s("%99s,a");
	int b = 0;
	int c = strlen(a);
	int d = 0;
	int e = 0;
	int f = 0;
	for (int i = 0; i < c; i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			d++;
		}
	}
	for (int i = 0; i < c; i++) {
		if (a[i] >= 'a' && a[i] <= 'z') {
			e++;
		}
	}
	for (int i = 0; i < c; i++) {
		if (!(a[i] < 'a' && a[i] > 'z') && !(a[i] < 'A' && a[i]>'Z')) {
			f++;
		}
	}
	
	if (8 <= c && c <= 16 && 1 <= d && 1 <= e && 1 <= f) {
		printf("可能");
	}
	else
	{
		printf("ダメ");
	}
	
} 
