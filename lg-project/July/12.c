//请你模仿Shell的处理，把一个字符串按空格作为间隔符，转化为argc和argv[]的形式

#include<stdio.h>

char str[128] = "./a.out  100    200";
int argc = 0;
char *argv[16] = {};

void parse(void)
{
    int i = 0;
    int state = 0;

    while (str[i])
    {
        if(state == 0 && str[i] != ' ')
        {
            state = 1;
            argv[argc++] = str + i;
        }
        if(state == 1 && str[i] == ' ')
        {
            state = 0 ;
            str[i] = '\0' ;
        }
 /*       if(state == 1 && str[i] != ' ')
        {
            printf("%c",str[i]);
            i++;
        }
        if(state == 1 && str[i] == ' ')
        {
            state = 0;

        } */
        i++;
    }
}

int main(void )
{
    int i = 0;

 //   printf("hello, akaer\n");
    parse();
    printf("argc = %d \n",argc);

    for (i = 0; i < argc; i++)
    {    
     
       printf("argv[%d] =%s\n", i ,argv[i]);

    }
    return 0;
}



