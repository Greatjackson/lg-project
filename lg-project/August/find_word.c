#include<stdio.h>

int i,j,temp,num;
int str[52];

int find_word(char *p)
{	
	while(*p != '\0')
	{
		str[*p - 'a'] += 1;
		p++;
	}
	for(i=0;i<52;i++)
	{
		if(str[i] >str[i+1])
		{
			temp = str[i];
			str[i] = str[i+1];
			str[i+1] = temp;
		}
	}
	return str[51];
}
int main(int argc, const char *argv[])
{
	int big;
	big = find_word(char *argv[]);
	printf("%c\n", big + 'a');

	return 0;
}

