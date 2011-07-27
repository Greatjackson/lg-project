#include<stdio.h>
int main (void)
{
    unsigned char i = 0xaa;    
    unsigned char j = 0x1e;
    unsigned char out = 0;     
    out = (i & j);
    out >>= 1;
    printf("%d\n",out);
    return 0;
}
