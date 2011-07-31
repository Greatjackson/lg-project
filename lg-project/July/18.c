
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define   N   20


void init_array(int *p, int n)
{
    srand(time(NULL));
    int i = 0;
    for (i = 0; i < n; i++)
    {
        p[i] = rand()%(n*2);
    }
    printf("\n");
}
void print_array(int *p, int n)
{
    int i = 0;
    if(p[j] != -1)
    {
        for(i=0; i<n; i++)
        {
            if((i % 8) == 0)
            {
                printf("\n");
            }
            printf("%4d",p[i]);
        }
    }
    printf("\n");
}
void delete_same(int *p, int n)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < n-1; i++)
    {
        if(p[i] != -1)
        {
            for(j=i+1; j<n; j++)
            {
                if(p[i] = p[j])
                p[j] = -1; 
            }
        }
    }
}
int main(int argc, const char *argv[])
{
    int array[N];
    init_array(array,N);
    print_array(array,N);
    delete_same(array,N);
    print_array(array,N);
    return 0;
}



