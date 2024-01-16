// 编写一个程序,接受两个命令行参数.第一个参数是字符,第二个参数是文件名.要求该程序只打印文件中包含给定字符的那些行
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char * argv[])
{
    char str[100];
    FILE * fp;
    char ch;
    if(argc==3)
    {
        if((fp=fopen(argv[2],"r"))==NULL)
        {
            printf("can't open %s.\n",argv[2]);
            exit(EXIT_FAILURE);
        }
        ch=*argv[1];
    }
    else
    {
        printf("Usage:%s filename.\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    while(!feof(fp)&&fscanf(fp,"%s",str)==1)
    {
        if(strchr(str,ch))
        {
            printf("%s\n",str);
        }
    }
    return 0;
}