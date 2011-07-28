/*
#include<stdio.h>
int main(void)
{
    int array[10];
    int i = 0;
    int *ptr;
    ptr = array;   //ptr = &array[0];

    for(i=0; i<10; i++)
    {
        *(ptr + i) = i;
        printf("%x\n",array[i]);
    }

    return 0;
}
*/
#include<stdio.h>
#define  N  10
int main(void)
{
    int array[N];
    int *ptr;
    int i = 0;
    
    ptr = array;

    for(i=0; i<N; i++,ptr++)
    {
        *ptr = i+1;
    }

    for(i=0; i<N; i++)
    {
        printf("%4d",array[i]);
    }
    printf("\n");
    return 0;
}
