#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
    int number;
    char name[20];
    struct student *next;
};

typedef struct student STU;

STU *create_link(int n)
{
    int i = 0;
    STU *head = NULL;                   //定义结构体指针
    STU *p = NULL;

    head = p = malloc(sizeof(STU));
    if(p == NULL)
    {
        perror("create");
        exit(0);
    }
    p->number = 1;
    strcpy(p->name, "student");
    p->next = NULL;

    for(i=1; i<n; i++)
    {
        p->next = malloc(sizeof(STU));
        if(p->next == NULL)
        {
            perror("create");
            exit(0);
        }
        p->next->number = i+1;
        strcpy(p->next->name, "student");
        p->next->next = NULL;
        p = p->next;

    }
    return head;                   //释放head所占的内存
}

void print_link(STU *p)
{
    if(NULL == p)
    {
        printf("empty.\n");
        return;
    }
    while(p != NULL)
    {
        printf("%-5d  %s\n", p->number,p->name);
        p = p->next;
    }
}
int get_num(STU *p)
{
    int counter = 0;
    while(p != NULL)
    {
        counter++;
        p = p->next;
    }
    printf("%d\n",counter);
    return counter;
}
STU *add_node(STU *p)
{   
    
    STU *head;                               //新定义结构体指针
    STU *p_c;    
    head = p;                                //把指针p的地址赋给头指针，防止head丢失
    p_c = malloc(sizeof(STU));
    if(p_c == NULL)                          
    {
        perror("new malloc");
        exit(0);
    }
    printf("please input the number:\n");
    scanf("%d",&p_c->number);
    printf("input the name:\n");
    scanf("%s",p_c->name);
    p_c->next = NULL;                        //新加入的链表结束的标志
    if(p == NULL)                            //该节点的头尾指针都为空
    {
        return p_c;                            
    }

    if(p_c->number < p->number)              //假如新加入的结构体的number序号比第一个结构体的还小 
    {
        p_c->next = p;                       //把第一个接到当前
        return p_c;                          //把当前结构体的头返回
    }

    while(p->next != NULL)
    {
        if(p->next->number > p_c->number)    //假如结构体的number序号比新加入的大
        {
            break;
        }
        p = p->next;                         //把下一个的地址给当前指针
    }
    p_c->next = p->next;                     //接下
    p->next = p_c;                           //呈上
    
    return head;
}
STU *delete_node(STU *p)
{
/*
    STU *head;
    STU *p_c;
    head = p;
    printf("please input the delete number:\n ");
    scanf("%d",&p_c->number);
    p_c->next = NULL;
    if(p_c->number == p->number)
    {
        p = p_c->next;
        return head;
    }
    free(p_c);
*/
    STU *head = p;
    STU *temp = NULL;
    int num;
    
    if(NULL == p)                           //假如链表为空
    {
        printf("empty.\n");
        return NULL;
    }

    printf("please input the number to delete:\n");
    scanf("%d",&num);
       
    if(p->number == num)                    //删除第一个节点
    {
        head = p->next;
        free(p);
        return head;
    }


    while(p->next != NULL)
    {
        if(p->next->number == num)
        {
            break;
        }
        p = p->next;
    }  
    if(p->next == NULL)                     //删除不存在的节点        
    {
        printf("no number match.\n");
        return head;
    }
    temp = p->next;
    p->next = p->next->next;
    free(temp);
    return head;
}

int main(void)
{
    STU *head = NULL;

//    head = create_link(10);                        
//    print_link(head);
    int i = 0;
    for(i=0; i<5; i++)
    {
    head =  add_node(head);
    
    print_link(head);
    }
    head = delete_node(head);
    print_link(head);
    get_num(head);
    return 0;
}
