#include<stdio.h>
int foo(int num, char ch) 
{
	printf("%d\n%c\n",num, ch);
	return 0;
}
int too(int num, char ch) 
{
	printf("%d\n%c\n",num, ch);
	return 0;
}
int main(void)
{
	int i;
	int (*p[10])(int , char) = {foo, too};      //函数指针数组
//	int (*p)(int , char)                        //函数指针 带两个参数 返回值为 int 
	i = 0;
	while(p[i] != NULL)
	{
		p[i](i,'a'+ i);
		i++;
	}
	return 0;
}

