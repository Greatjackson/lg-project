#include<stdio.h>
#include<string.h>
int main(int argc, const char *argv[])
{
	char str[30] = "gcc main.c -o main";
	char *p;
	p = strtok(str, " ");
	while(p!= NULL)
	{
//		p = strtok(NULL, " ");
		printf("%s\n",p);
		p = strtok(NULL, " ");
	}
	return 0;
}

char a = "abc";            //赋值 开辟系统内存  为常量 只读 不可改变
char a[10] = "abc";        //初始化 非赋值 
a = "abc";                 //错误
a[10] = "abc";             //错误 且越界
strcpy();                  //赋值
for();                     //赋值
