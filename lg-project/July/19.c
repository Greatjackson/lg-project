#include<stdio.h>
#include<stdlib.h>

int main(int argc, const char *argv[])
{
    int array[3][4];
    int i = 0;
    int j = 0;
    for(j=0; j<3; j++)
    {
        for(i=0; i<4;i++)
        {
            array[j][i] = rand()%20;
        }
    }
    for(j=0; j<3; j++)
    {
        for(i=0; i<4;i++)
        {
            printf("%5d",array[j][i]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
