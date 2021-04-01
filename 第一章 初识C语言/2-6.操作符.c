#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int arr[10] = { 0 };//10个整型元素的数组
	int sz = 0;
	printf("%d\n", sizeof(arr));//10*sizeof(int)=40
	//计算数组的元素个数
	//个数=数组总大小/每个元素的大小
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n", sz);

	int a = 10;
	//sizeof 计算的是变量/类型所占空间的大小，单位是字节
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);
	//printf("%d\n", sizeof int);//报错
	return 0;
}
