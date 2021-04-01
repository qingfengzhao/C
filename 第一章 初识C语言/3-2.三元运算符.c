#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int max = (a > b ? a : b);
	printf("%d", max);
	return 0;
}
