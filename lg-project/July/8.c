#include<stdio.h>
int main(void)
{
    int a = 9;
    int b = 0;
    int *ptr = &a;

    printf("a = %x\n",a);
    printf("&a = %x\n",&a);
    printf("ptr = %x\n",ptr);
    printf("*ptr = %x\n",*ptr);
    printf("&ptr = %x\n",&ptr);

    return 0;
}
