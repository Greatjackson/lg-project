#include<stdio.h>
int main(void)
{
    int a = -10;
    unsigned int b = 6;

    if((a+b) < b)
    {
        printf("hello\n");
    }
    else
    {
        printf("world\n");
    }

    return 0;
}
