#include<stdio.h>
int main(int argc, const char *argv[])
{
	int i = 0;
	printf("argc = %d\n",argc);
	while(i<argc)
	{	
		printf("argv[%d] = %s \n",i, argv[i]);
		i++;
	}
	return 0;
}
