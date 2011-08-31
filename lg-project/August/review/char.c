#include<stdio.h>
#include<string.h>
int find(char *str, char *substr)
{
	int i = 0;
	while((str = strstr(str,substr)) != NULL)
	{
		str++;
		i++;
	}
	return i;
}
int main(int argc, const char *argv[])
{
	int num;
	char *s1 = "this is a c programe!";
	char *s2 = "is";
	num = find(s1,s2);
	printf("%d\n",num);
	return 0;
}

