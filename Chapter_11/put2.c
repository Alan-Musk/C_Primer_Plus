// put2.c -- 打印一个字符串,并统计打印的字符数
#include <stdio.h>
int put2(const char * string);
int main(void)
{
    char hello[]="hello,world\n";
    int num=put2(hello);
    printf("%d个字符\n",num);

    return 0;
}
int put2(const char * string)
{
    int count=0;
    while(*string)
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');

    return count;
}