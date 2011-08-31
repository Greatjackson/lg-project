#include<stdio.h>
#include<stdlib.h>
int riffle(int (*p)[13])
{
	int flag[52] = {0};
	int num = 52;
	int temp;
	int *q = (int *)p;

	srand(time(NULL));
	while(num > 0)
	{
		temp = rand()%52;
		if(flag[temp] == 1)
			continue;
		else
			{	
				flag[temp] = 1;
				*q = temp;
				q++;
				num--;
			}
	}
	return 0;
}
print_num(int (*p)[13])
{
	int *q = (int *)p;
	int i;
	for(i=0; i<52; i++,q++)
		printf("%d\n",*q);
	return 0;
}
perflop(int (*p)[13], int r)
{

}
int main(int argc, const char *argv[])
{	
	int a[4][13];
	riffle(a);
	print_num(a);
	perflop(a,3);
	return 0;
}
