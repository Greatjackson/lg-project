/*#include<stdio.h>
int main(void)
{  
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int i = 0;
    for(; i<11; i++)
    {
    while(array[i] == "\o")
    {
    i = 0;
    i++;
    array[i] = i;
    printf("%4d",array[i]);
    if(i % 3 == 0)
    {
        printf("(out)\n");
        i + 1;
    }
    }
    }
    return 0;
*/
/*
    int array[40];
    int i;
    for (i = 0; i < 40; i++)
    {
        array[i] = i;
    }
    return 0;
*/
#include<stdio.h>
#define N  10
int main(void)
{
    char array[N] = {0};
    int i = 0;
    int interval = 4;
    int out_counter = 0;
    int total_num = 0; 

    for (i = 0;total_num < N; i++)
    {
        if(i == N)
        {
            i = 0;
        }
        if(array[i] == 0)
        {   
            out_counter++;
            if(out_counter == interval)
            {
                out_counter = 0;
                array[i] = 1;
                printf("%5d(out)\n",i + 1);
                if(total_num == 9)
                {
                    printf("%5d\n",i + 1);
                    return 0;
                }
                total_num++;
            }
            else
            {
                
                printf("%5d",i + 1);               
            }
        }
    }
    return 0;
}




















