#include <stdio.h>

int main()
{
	//局部变量的作用域
	int num = 0;
	{
		printf("num=%d\n", num);
	}
	return 0; 
}

//全局变量
int global = 2020;
void test()
{
	printf("test()--%d\n", global);
}
int main()
{
	test();
	printf("%d\n", global);
	return 0;
}

int main()
{
	//未声明的标识符
	//声明extern外部符号的
	//局部变量的声明周期:进入作用域生命周期开始，出作用域声明周期结束。
	//全局变量的生命周期：整个程序的生命周期。
	extern int g_val;
	printf("g_val=%d\n", g_val);
	return 0;
}

