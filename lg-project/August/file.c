#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    FILE *fp = NULL;
    char str[1024] = {"this is a programe"};
//    printf("%s\n",str);
    char r_str[1024] = {0};             //{aaaaaaaaaaaaaaaaaaaaaaaaaaa}测试fread库函数
    fp = fopen("1.txt","r+");           //r+覆盖原有的部分字节  w清空重新写，但如果文件不存在可新建写入  a+在原有的基础上追加
    if(fp == NULL)
    {
        perror("open");
        exit(0);
    }
//    fscanf(fp, "%s" ,r_str);            //必须在只读模式下 且只显示第一个在字符串 无空格
//    fgets(r_str,1023,fp);                 //不显示下一行
//    fputs(str,fp);
//    gets(r_str);
//    fget(r_str,1023,stdin);
//    fputs(r_str,stdout);
//    printf("%s",r_str);
//    fprintf(fp,"%s\n",str);
    int n = 0;

    int k = 0;
/*
    printf("input:\n");
    scanf("%d",&k);
*/    
/*    int i = 0;
    while(str[i] != '\0')
    {
         putc(str[i],fp);
         i++;
    }
*/    
    //rewind(fp);                             //将文件内部的位置指针重新指向一个流（数据流/文件）的开头
    fwrite(str, 1, strlen(str), fp);       
    //往一个流中写数据  接收数据的指针  数据单位 数据长度（strlen：计算字符串长度 不包括'\0'） 读取的目标文件
    fseek(fp, k, SEEK_SET);                   //重定位流(数据流/文件)上的文件内部位置指针 文件指针 偏移量 偏移起始位置
    n = fread(r_str, 1, 1023, fp);            //从一个流中读数据
    r_str[n] = '\0';
/*    i = 0;
    while((r_str[i] = getc(fp)) != EOF)      //一个一个的读入任何字符,到EOF(尾)结束
    {
        i++;
    }
    r_str[i] = '\0';
*/    
    printf("%s\n",r_str);
    fclose(fp);
    return 0;

}
