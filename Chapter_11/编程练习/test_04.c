// 设计并测试一个函数,它类似编程练习3的描述,只不过它接受第二个参数指明可读取的最大字符数.
// 读者注:鉴于阅读理解能力有限,故认定为可读取的最大字符数,是从原数组中读取每一个字符的数量,故假如遇到空格数量也+1
#include <stdio.h>
#define SIZE 30
char * read(char * st,int n);

int main(void)
{
    char st[SIZE];
    read(st,10);
    puts(st);
    return 0;
}

char * read(char * st,int n)
{
    char input[SIZE];
    char * in=input;
    int num=0;

    fgets(input,SIZE,stdin);
    while((*in==' '||*in=='\n'||*in=='\t')&&num<n)
    {
        in++;
        num++;
    }
    while(num<n&&*in!='\0'&&*in!='\t'&&*in!=' '&&*in!='\n')
    {
        *st++=*in++;
        num++;
    }

    return st;
}