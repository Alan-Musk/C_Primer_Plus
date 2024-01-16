// 修改程序清单13.1中的程序,要求提示用户输入文件名,并读取用户输入的信息,不使用命令行参数.
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char * argv[])
{
    int ch;
    FILE *fp;
    char name[20];
    unsigned long count=0;
    printf("请输入读取的文件名:");
    if(scanf("%s",name)!=1)
    {
        printf("Usage:%s filename\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fp=fopen(name,"r"))==NULL)
    {
        printf("Can't open %s\n",name);
        exit(EXIT_FAILURE);
    }
    while((ch=getc(fp))!=EOF)
    {
        putc(ch,stdout);
        count++;
    }
    fclose(fp);
    printf("FIle %s has %lu characters\n",name,count);

    
    return 0;
}