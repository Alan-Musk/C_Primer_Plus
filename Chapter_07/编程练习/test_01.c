//编写一个程序读取输入,读到'#'字符停止,然后报告读取的空格数,换行符数和所有其他字符的数量
#include <stdio.h>

int main(void)
{
    char ch;
    int numBlank=0,numEnter=0,numOther=0;

    while((ch=getchar())!='#')
    {
        if(ch==' ')
        {
            numBlank++;
        }
        else if(ch=='\n')
        {
            numEnter++;
        }
        else
        {
            numOther++;
        }
    }

    printf("空白字符的数量是:%d\n换行字符的数量是:%d\n其他字符的数量是:%d\n",numBlank,numEnter,numOther);

    return 0;
}