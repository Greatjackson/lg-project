#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define   M  20
/*
int main(int argc, const char *argv[])
{
    int array[8] = {95,87,74,89,84,97,91,88};
    int i = 0, j = 0, n = 8,t;

    for (j = 0; j < 8; j++)
    {
        if(array[i] > array[i+1])
        {
            t = array[i];
            array[i] = array[i+1];
            array[i+1] = t;
        }
        i++;
        if(i == (n-1))
        {
            i = 0;
            n--;
            j = 0; 
        }
    }        
        for(i = 0; i < 8; i++)
        {
            printf("%4d\n",array[i]);
        }
    return 0;
}
*/
void print_array(int *p, int n)
{
    int i = 0;
    for(i=0; i<n; i++)
    {
        if((i%8) == 0)
        {
            printf("\n");
        }
        printf("%6d",p[i]);
    }
}
void init_array(int *p,int n)
{
    srand(time(NULL));
    int i = 0;
    for(i=0; i<n; i++)
    {
        p[i]=rand()%(n*2);   //countrl  the  range;
    }
}
void sort_array(int *p, int n)
{
    int i = 0;
    int j = 0;
    int temp;
    int k = 0;

    for(i=0; i<(n-1); i++)
    {   
        k = i;
        for(j=i+1; j<n; j++)
        {
            if(p[k] > p[j])
            {
                k = j;
            }
        }
        if(i != k)
        {
            temp = p[i];
            p[i] = p[k];
            p[k] = temp;
        }
    }
}
int main(int argc, const char *argv[])
{
    int array[M];

    init_array(array, M);
    print_array(array, M);
    sort_array(array, M);
    print_array(array, M);
    printf("\n");
    return 0;
}
