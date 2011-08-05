#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define   M   4
#define   N   5

void init_array(int (*p)[N], int i, int j);
void print_array(int (*p)[N], int i, int j);
void sort_array(int (*p)[N], int i, int j);

int main(void)
{
    int array[M][N];
    int *p = NULL;             //'NULL' means the initial value '0' of the pointer 

    p = &array[0][0];          //the pointer point to the address of the first element of the array

    init_array(array,M,N);
    print_array (array,M,N);
    sort_array(array,M,N);
    print_array(array,M,N);

    return 0;
}    
void init_array(int (*p)[N], int i, int j)    //(*p)[N]: 指向指针数组的指针,char **p : 指向字符型数据的指针变量
{
    for (j = 0; j < 4; j++)
    {
        for (i = 0; i < 5; i++)
        {
            p[j][i] = rand() % 20;    
        }
    }
}
void sort_array(int (*p)[N], int i, int j)  
{
    int temp = 0;
    for(j = 0; j < M*N; j++)
    {
        for (i = j+1; i < M*N; i++)
        {
            if(p[0][j] > p[0][i])

            {
                temp = p[0][i];
                p[0][i] = p[0][j];
                p[0][j] = temp;
            }
        }
    }
}
void print_array(int (*p)[N], int i, int j)
{
    for (j = 0; j < 4; j++)
    {
        for (i = 0; i < 5; i++)
        {
            printf("%4d",p[j][i]);    
        }
        printf("\n");
    }
    printf("\n");
}

