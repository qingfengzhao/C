#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//结构体
//char int double 。。。
//复杂对象
//复杂对象-结构体-相当于对象
struct Book
{
	char name[20];
	short price;
};
int main()
{
	//1.利用结构体类型-创建一个 该类型的结构体变量
	struct Book b1 = { "C语言程序设计",55 };
	printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	b1.price = 15;
	printf("修改后的价格：%d\n", b1.price);

	//2.利用pb打印出我的书名和价格
	struct Book* pb = &b1;
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);

	//3.箭头符号
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);

	//4.修改名字 
	strcpy(b1.name, "C++");//strcpy -string  copy 字符串拷贝-库函数 string.h
	printf("书名：%s\n", b1.name);
	return 0;
}
