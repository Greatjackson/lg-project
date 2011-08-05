#include<stdio.h>
#include<string.h>

/*
struct data
{
    int a;
    char c;
};
typedef double stu;
sizeof float;
*/
/*
struct student
{
    int number;
    char name[20];
};
typedef struct student STU;

int main(void)
{
    STU m;

    m.number = 20;
    strcpy(m.name, "zhang");     //assign for character array

    printf("number  name\n");
    printf("%-5d    %s\n",m.number, m.name);
    return 0;
}
*/
/*
int *p;
struct data
{
    int a ;
    char b;
}
p = 0;
p -> a;
printf("%d\n",a);
*/
/*
struct student
{
    int number;
    char name[20];
};
typedef struct student STU;

int main(void)
{
    STU m;
    STU *ptr = NULL;             //所定义的指针必须和结构体中的类型相同

    ptr = &m;                     //指针指向结构体变量的地址

    ptr->number = 15;              //通过指针给结构体中的元素赋值
    strcpy(ptr->name, "zhang");     //assign for character array

    printf("number  name\n");
    printf("%-5d    %s\n",ptr->number, ptr->name);
    */

struct student
{
    int number;
    char name[20];
    struct student *p;
};
typedef struct student STU;

int main(void)
{
    STU m;
    STU n;
    STU *ptr = NULL;             //所定义的指针必须和结构体中的类型相同

    ptr = &m;                     //指针指向结构体变量的地址
    
    ptr -> p = &n;                 //将p的地址赋值给结构体m中的指针p，然后指针ptr通过操作p所指向的结构体m操作n中的内容 

    ptr->p->number = 5;
    strcpy(ptr->p->name,"wang");

    ptr->number = 15;              //通过指针给结构体中的元素赋值
    strcpy(ptr->name, "zhang");     //assign（赋值）for character array

    printf("number  name\n");
    printf("%-5d    %s\n",ptr->number, ptr->name);
    printf("%-5d    %s\n",ptr->p->number, ptr->p->name);

    return 0;
}
