#include<stdio.h>
#define   M    10
#define   N    8
int main (void)
{
    int array[M][N];
    int (*p)[M];
    p = array;

    printf("array[0][0] : %p\n",&array[0][0]);
    printf("array       : %p\n",array);
    printf("&array[0]   : %p\n",&array[0]);
    printf("array[0]    : %p\n",array[0]);
}
