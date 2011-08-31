#include<stdio.h>
int main(int argc, const char *argv[])
{
	char a[]= "jgka;ieow";
	printf("%s",a);
	fflush(stdout);         //清除文件缓冲区 当文件以写方式打开时将缓冲区内容写入文件
	while(1);

	return 0;
}

