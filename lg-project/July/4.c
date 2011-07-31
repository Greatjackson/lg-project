#include<stdio.h>
int main(void)
{
    int a = 1;
    int b = 2;
    printf("a+b=%d\n",a + b);
    printf("a-b=%d\n",a - b);
    printf("a*b=%d\n",a * b);
    printf("a/b=%d\n",a / b);
    printf("a%%b=%d\n",a % b);
    int i;
    for (i = 0; i < 100; i++)
    {
        printf("%3d",i + 1);
       /* while((i + 1) % 5 == 0 )
        {
            printf("\n");
            switch((i+1) / 20)
            {
            case 1 : printf("first group");break;
            case 2 : printf("second group");break;
            case 3 : printf("third group");break;
            case 4 : printf("forth group");break;
            case 5 : printf("fifth group");break;
            default: break;
            }
            
        }*/
    }
    return 0;
}
