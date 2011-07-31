#include<stdio.h>
int main(int argc, const char *argv[])
{
    int str[100];
    int i = 0;
    int num = 0;
    int *ptr;

    ptr = str;
    
    for (i = 0; i < 100; i++,ptr++)
    {
        *ptr = i;
        
        if((*ptr % 10) == 9 || (*ptr / 10  == 9))
        {
        printf("%3d",*ptr);
        num++;
        }
    }
    printf("\n");
    printf("%d",num);
    printf("\n");
    return 0;
}
