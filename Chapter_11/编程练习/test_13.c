// 编写一个程序,反序显示命令行参数的单词.例如,命令行参数是see you later,该程序应该打印later you see
#include <stdio.h>

int main(int argc,char * argv[])
{
    int num=0;
    for(num=argc-1;num>0;num--)
    {
        printf("%s ",argv[num]);
        // printf("%d\n",num);
    }
    printf("\n");
    return 0;
}