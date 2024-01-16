// 编写一个名为is_within()的函数,接受一个字符和一个指向字符串的指针作为两个函数形参.
// 如果指定字符在字符串中,该函数返回一个非零值(即为真).否则,返回0(即为假).
// 在一个完整的程序中测试该函数,使用一个循环给函数提供输入值
#include <stdio.h>
#define SIZE 30
int is_within(char ch,char * st);

int main(void)
{
    char input[30];
    char in=' ';
    fgets(input,SIZE,stdin);
    puts("请输入一个字符:");
    while((scanf("%c",&in))==1&&in!=EOF)
    {
        if(is_within(in,input))
        {
            printf("%c存在:%p\n",in,&in);
        }
        else
        {
            puts("不存在");
        }
        while(getchar()!='\n')
        {
            continue;
        }
        printf("请再查找字符");
    }
}

int is_within(char ch,char * st)
{
    while(*st!='\0')
    {
        if(*st==ch)
        {
            return 1;
        }
        st++;
    }
    return 0;
}