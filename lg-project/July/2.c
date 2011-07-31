#include<stdio.h>
int main(void)
{
/*    unsigned char i = 12,j;
   // scanf("%d\n",&i);
   int n,m;
    for(n = 0;n < 8;n++)
    {
        for(m = 1;m < 9;m++)
        {
                j = i % (2 * m);
                printf("%d\n",j);
        }
    }
    return 0;
*/
/*    unsigned char a = 0x556677aa;
    unsigned char mask = (1 << 31);
    int i = 0;

    for (i = 0; i < 32; i++)
    {
        printf("%c",((a & mask) > 0) ? '1': '0');
        mask >>= 1;
    }
    printf("\n");
    return 0;
*/    
    unsigned int a = 0x556677aa;
    unsigned int mask = (1 << 31);

    for (;mask > 0;mask >>= 1)
    {
        printf("%c",((a & mask) > 0) ? '1': '0');
    }
    printf("\n");
    return 0;
}
