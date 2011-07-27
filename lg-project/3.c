#include<stdio.h>
int main(void)
{
/*    unsigned int a = 0x556677aa;
    unsigned int mask = (15<<32);
    unsigned int i, j = 0;
    for(i = 0;i < 4; i++)
   {
        j = (mask & a);
        printf("%c",j);
        mask >>= 4;
    }
    printf("\n");
    return 0;
*/    
    unsigned int a = 0x556688aa; //a = 126   or   a = 
    unsigned int mask = 0x0f;
    unsigned int i = 0;
    unsigned int move = 28;
    char str[16] = "0123456789abcdef";

    printf("0x");
    for(i=0; i<8; i++)
    {
        printf("%c",str[((a >> move) & mask)]);
        move -= 4;
    }
    printf("\n");
    return 0;
}
