//修改程序清单中8.8中的get_first()函数,让该函数返回读取的第一个非空白字符,并在一个简单的程序中测试.

#include <stdio.h>
char get_first(void);
int main(void)
{
    char ch;
    ch=get_first();

    printf("该字符是:%c-%d\n",ch,ch);

    return 0;
}

char get_first(void)
{
    int ch;

    while((ch=getchar())<=' ')
    {
        continue;
    }

    return ch;
}