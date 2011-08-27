#include<stdio.h>
#include"foo.h"
int main(int argc, const char *argv[])
{
	char str1[] = "abcdefg";
	printf("%s\n", str1);
	foo();
	return 0;
}
