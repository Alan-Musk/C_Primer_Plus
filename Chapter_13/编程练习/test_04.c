// 编写一个程序,按顺序在屏幕上显示命令行中列出的所有文件.使用argc控制循环
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char * argv[])
{
    FILE * fp;
    int i=0;
    char str[100];
    for(;i<argc-1;i++)
    {
        if((fp=fopen(argv[i+1],"r"))==NULL)
        {
            printf("%s文件打开有误.\n",argv[i]);
        }
        while(!feof(fp))
        {
            fgets(str,100,fp);
            fputs(str,stdout);
        }
        fclose(fp);
        printf("\n");
    }
    return 0;
}