// 编写一个程序读取输入,直到读到文件结尾,然后把字符串打印出来.该程序识别和实现下面的命令行参数
// -p 按原样打印    -u 把输入全部转换成大写 -l 把输入全部转换成小写 如果没有命令行参数,则让程序像是使用了-p参数那样运行
#include <stdio.h>
#include <ctype.h>
#define SIZE 100
int main(int argc,char * argv[])
{
    int num=0;
    char st[SIZE];
    char letter;
    //输入
    while((letter=getchar())!=EOF&&num<SIZE)
    {
        st[num]=letter;
        num++;
    }
    //处理
    if(num=0,argv[1][0]=='-')
    {
        switch (argv[1][1])
        {
            case 'p':
                printf("%s\n",st);
                break;
            case 'u':
                for(;st[num]!='\0';num++)
                {
                    st[num]=toupper(st[num]);
                }
                printf("%s\n",st);
                break;
            case 'l':
                for(;st[num]!='\0';num++)
                {
                    st[num]=tolower(st[num]);
                }
                printf("%s\n",st);
                break;
            default:
                printf("找不到命令行参数\n");
        }
    }
    else
    {
        printf("找不到命令行参数\n");
    }
    printf("程序结束\n");
    return 0;
}