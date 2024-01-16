// strlen()函数接受一个指向字符串的指针作为参数,并返回该字符串的长度.请编写一个这样的函数
#include <stdio.h>
int strlength(char * st);

int main(void)
{
    int num;
    char * st="Hello d";
    num=strlength(st);
    printf("该字符串的长度为%d\n",num);
    return 0;
}
int strlength(char * st)
{
    int tot=0;
    while(*st!='\0')
    {
        tot++;
        st++;
    }
    return tot;
}