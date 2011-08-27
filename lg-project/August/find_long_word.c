#include<stdio.h>

int str[20];
char *p;
int i,j,temp;
int num = 0;

int find_word(void)
{
	while(*p != '\0')
	{
		if(*p != ' ')
		{
			p++;
			i++;
		}
		str[j] = i;
		p++;
		for(num=0;num<20;num++)
		{
			if(str[num]>str[num+1])
			{
				temp = str[num];
				str[num] = str[num+1];
				str[num+1] = temp;
			}

		}
	}
	return str[num];
}
int main(int argc, const char *argv[])
{
	int y;
	y = find_word(); 
	printf("%d\n",y);
	return 0;
}
