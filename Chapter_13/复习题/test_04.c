// 编写一个程序,不接受任何命令行参数或接受一个命令行参数.如果有一个参数,将其解释为文件名:如果没有参数,使用标准输入(stdin)作为输入
// 假设输入完全是浮点数.该程序要计算和报告输入数字的算数平均值
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main(int argc,char * argv[])
{
    FILE * fp;
    int num=0;
    double n;
    double sum=0;
    //无第二参数时,指定标准输入为输入源
    if(argc==1)
    {
        fp=stdin;
        printf("Enter the bumber(EOF to end input):\n");
    }
    else if(argc==2)
    {
        if((fp=fopen(argv[1],"r"))==NULL)
        {
            printf("Can't open %s.\n",argv[1]);
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        printf("Usage:%s filename\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    while(!feof(fp)&&(fscanf(fp,"%lf",&n)==1))
    {
        num++;
        sum+=n;
    }
    if(num>0)
    {
        printf("Average of data is %lf\n",sum/num);
    }
    else
    {
        printf("There is no number.\n");
    }
    return 0;
}