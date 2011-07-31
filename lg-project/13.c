#include<stdio.h>
#include<string.h>
/*
int main(int argc, const char *argv[])
{
    int i = 0;
    printf("%d parameters:",argc);
    for (i = 0; i < argc; i++)
    {
        printf("%s\n",argv[i]);
    }
    return 0;
}
*/
int main(int argc, const char *argv[])
{
    char str[] = "hello everyone , today we will study how to use the command str";
    char str1[] = "study";
    
    strstr(str,str1);
    printf("%s\n",str1);
    return 0;
}
