// 编写一个函数,从标准输入中读取字符,直到遇到文件结尾.程序要报告每个字符是否是字母.
// 如果是,还要报告该字母在字母表中的数值位置.例如,c和C在字母表中都是3.合并一个函数,以一个字符作为参数.如果该字符是一个字母则返回一个数值位置,否则返回-1
#include <stdio.h>
int letter(char ch);//判断是否为字母,并返回数值位置
int main(void)
{
    char ch;
    int position;//位置
    while((ch=getchar())!=EOF)
    {
        position=letter(ch);
        if(position==-1)
        {
            printf("%c不是字母.\n",ch);
        }
        printf("%c是字母,在字母表中位置是:%d\n",ch,position);
    }

    return 0;
}

int letter(char ch)
{
    int position;
    if(ch>='A'&&ch<='Z')
    {
        position=ch-64;
    }
    else if(ch>='a'&&ch<='z')
    {
        position=ch-96;
    }
    else
    {
        position=-1;
    }

    return position;
}