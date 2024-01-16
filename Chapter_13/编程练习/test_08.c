// 编写一个程序,以一个字符和任意文件名作为命令行参数.如果字符后面没有参数,该程序读取标准输入;否则,程序一次打开每个文件并报告每个文件中该字符出现的次数.
// 文件名和字符本身也要一同报告.程序应包含错误检测,以确定参数数量是否正确和是否能打开文件.如果无法打开文件,程序应报告这一情况,然后继续处理下一个文件
#include <stdio.h>
#include <stdlib.h>
#define SIZE 128
int main(int argc,char * argv[])
{
    FILE * fp;
    char * buff=(char *)malloc(SIZE*sizeof(char));
    int i=1;
    int sum=0;
    if(argc==2)
    {
        printf("请输入字符串.");
        char ch;
        while((ch=getchar())!='\n')
        {
            if(ch==*argv[1])
            {
                sum++;
            }
        }
        printf("%s该字符出现的次数是:%d\n",argv[1],sum);
    }
    else if(argc>2)
    {
        for(int k=2;k<argc;k++)
        {
            char ch;
            if((fp=fopen(argv[k],"r"))==NULL)
            {
                printf("%s文件打开错误",argv[k]);
                exit(EXIT_FAILURE);
            }
            while(fgets(buff,SIZE,fp)!=NULL)
            {
                while(*buff!='\0')
                {
                    if(*buff==argv[1][0])
                    {
                        sum++;
                    }
                    buff++;
                }
            }
            fclose(fp);
            printf("%s在文件%s中出现的次数为%d\n",argv[1],argv[k],sum);
            sum=0;
        }
    }
    else
    {
        printf("参数错误!\n");
        exit(EXIT_FAILURE);
    }
    return 0;
}
