#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    
    unsigned char str[20] = "abcdefghijklmn";
    unsigned char *ptr;
    int num = 1;

    ptr = str;
    
    while((*ptr) != '\0')
    {
        if (*ptr == 'l')
        {
        
        printf("%c\n",*ptr);
        printf("%d\n",num);
        }
        num++;
        ptr++;
    }
    return 0;
}
