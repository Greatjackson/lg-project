#include<stdio.h>
/*
int main(void)
{
    int i;
    int array[100];

    for (i = 0; i < 100; i++)
    {
        array[i] = i;
    }
    for (i = 0; i < 100; i++)
    {
        printf("%4d",array[i]);
    }
    printf("\n");
    return 0;
}
*/
/*
int main(void)
{
    int i = 0;
    int array[100];
    
    while(i < 100)
    {
        printf("%4d",(array[i] = i));
        i++;
    }
    printf("\n");
    return 0;
}
*/
int main(void)
{
    int i = 0;
    int array[100];

    do
    {
        printf("%4d",(array[i] = i));
       if((i % 10) == 9)
       {
            printf("\n");
       }
        i++;
    }while(i < 100);

    return 0;
}
