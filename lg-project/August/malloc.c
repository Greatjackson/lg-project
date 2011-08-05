#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
    int number;
    char name[20];
    struct student *p;                    //定义指向自身结构体的指针变量
};

typedef struct student STU;

int main(int argc, const char *argv[])
{
    
    STU *ptr = NULL;
    ptr = malloc(sizeof(STU));            //开辟长度为size（STU）的内存空间，free（ptr）释放该内存空间
    if(ptr == NULL)
    {
        perror("malloc");                 //开辟内存空间失败；显示报错信息‘malloc’
        exit(0);                          //出现致命(fatal['feitl])错误，返回至主函数return 0；结束进程
    }
    ptr -> number = 1;
    strcpy(ptr -> name,"liu");
    printf("%-5d    %s\n",ptr -> number, ptr -> name);

    return 0;
}
