#include<stdio.h>

void quick_sort(int *p, int x, int y)
{
    int i = x;
    int j = y;
    int mid =p[(i+j)/2];
    int temp;

    do
    {
        while((p[i]<mid) && i < y) i++;
        while((p[j]>mid) && j > x) j--;
        if(i <= j)
        {
            temp = p[i];
            p[i] = p[j];
            p[j] = temp;
            i++;
            j--;
        }
    }while(i <= j);
    if(x < j)
    {
        quick_sort(p,x,j);
    }
    if(i < y)
    {
        quick_sort(p,i,y);
    }
}
int main(int argc, const char *argv[])
{
    
    return 0;
}
