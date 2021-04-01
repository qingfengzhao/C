#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char arr1[] = "abc";//数组
	//"abc" 'a' 'b' 'c' '\0' --'\0'(0)字符串的结束标志
	//'a' 97
	//'A' 65
	//ASCII 编码
	printf("%s\n", arr1);
	char arr2[] = { 'a','b','c','\0'};
	//'a' 'b' 'c'
	char arr3[] = { 'a','b','c' };//这种写法不会在末尾添加\0结束标志
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));//strlen-string length -计算字符串长度的
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr3));

	//"hello bit.\n"这种由双引号（Double Quote）引起来的一串字符成为字符串字面值（String Literal）,或者简称字符串
	//注：字符串的结束标志是一个\0的转义字符。在计算字符串长度的时候\0是结束标志，不算做字符串内容。
	return 0;
}
