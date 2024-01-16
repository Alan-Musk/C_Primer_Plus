// 设计并测试一个函数,从一行输入中把一个单词读取一个数组中,并丢弃输入行中的其他字符.该函数应该跳过第1个非空白字符前面的所有空白.
// 将一个单词定义为没有空白,制表符或换行符的字符序列
#include <stdio.h>
#define SIZE 20
char * input(char * st);

int main(void)
{
    char st[SIZE];
    input(st);
    puts(st);
    return 0;
}

char * input(char * st)
{
    char input[SIZE];
    char * in=input;
    fgets(input,SIZE,stdin);
    while((*in=='\n'||*in=='\t'||*in==' ')&&*in!='\0')
    {
        in++;
    }
    while(*in!='\n'&&*in!='\t'&&*in!=' '&&*in!='\0')
    {
        *st++=*in++;
    }
    return st;
}