// 使用命令行参数的程序依赖于用户的内存如何正确地使用他们.重写程序清单13.2(reducto.c)中的的程序,不使用命令行参数,而是提示用户输入所需信息.
#include <stdio.h>
#include <stdlib.h>     //提供exit()的原型
#include <string.h>     //提供strcpy(),strcat()的原型
#define LEN 40

int main(void)
{
    FILE *in,*out;//声明两个指向FILE的指针
    int ch;
    char name[LEN];//输出文件名
    char input[LEN];//输入文件名
    int count=0;

    printf("请输入输入的文件名:");
    scanf("%s",name);
    //检查输入
    if((in=fopen(name,"r"))==NULL)
    {
        fprintf(stderr,"I couldn't open the file \"%s\"",name);
        exit(EXIT_FAILURE);
    }
    //设置输出

    strncpy(input,name,strlen(name)-4);//拷贝文件名
    input[LEN-5]='\0';
    strcat(input,".red");
    if((out=fopen(input,"w"))==NULL)
    {
        fprintf(stderr,"Can't create output file.\n");
        exit(3);
    }
    //拷贝数据
    while((ch=getc(in))!=EOF)
    {
        if(count++%3==0)
        {
            putc(ch,out);
        }
    }
    //收尾工作
    if(fclose(in)!=0||fclose(out)!=0)
    {
        fprintf(stderr,"Error in closing files\n");
    }
    return 0;
}
