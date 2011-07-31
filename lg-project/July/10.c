#include<stdio.h>
#define  N 30

//int main(void)
//{
//    char str[N];
//    char *ptr;
//    int i;
/*
    ptr = str;

    for (i = 0; i < N; i++, ptr++)
    {
        *ptr ='a' + i;
    }
    for (i = 0; i < N; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
*/

/*
    ptr = str;

    for (i = 0; i < N-1; i++,ptr++)
    {
        *ptr = 'a'+i;
    }

    *ptr = '\0';

    printf("str = %s\n",str);
*/  

/*
    char str[N] = "abcdefghij";
    char *ptr;

    ptr = str;
     
    while(*ptr != '\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");
*/
/*
    char str[N] = "abcdefghijklmn";
    char *ptr;
    
    ptr = str;

    while(*ptr != '\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");
    ptr--;
    while(ptr >= str)                    //pointer turns back ,but must greater than starting address
    {
        printf("%c",*ptr);
        ptr--;
    }
    printf("\n");
*/

    char *copy(char *a, char *b);

    int main(int argc, const char *argv[])
    {
        char str[N] = "abcdefghijklmn";
        char str1[30];
        copy(str, str1);
        printf("%s\n",str1);
        return 0;
    }

    char *copy(char *a, char *b)
    {
        char *m = b;
        while((*(b++) = *(a++)) != '\0');
        
        return m;
    }
    





















