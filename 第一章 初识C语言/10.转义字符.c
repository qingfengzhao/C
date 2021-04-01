#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	printf("c:\\test\\32\\test.c\n");
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	//\t-水平制表符

	printf("%d\n", strlen("c:\test\32\test.c"));//13

	printf("%c\n", '\141');
	//\32--32是2个8进制数字
	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
	//32 -=>10进制 26->作为ASCII码值代表的字符

	printf("%c\n", '\x61');

	return 0;
 }

