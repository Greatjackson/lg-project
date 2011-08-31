#include<stdio.h>
#include<string.h>
int find(char *str,char *substr)
{
	int i = 0;

	while((str = strstr(str,substr)) != NULL)
	{
		i++;
		str++;
	}
	return i;

}
int main(int argc, const char *argv[])
{
	int num;
	char *a = "abc";
	char *b = "abc bjlg;abc jkl;abc jkl;g;''ao";
	num = find(b, a);
	printf("%d\n", num);

	return 0;
}
