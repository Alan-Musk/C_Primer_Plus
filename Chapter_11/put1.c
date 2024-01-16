// put1.c -- 打印字符串,不添加\n
#include <stdio.h>
void put1(const char * string);
int main(void)
{
    char names[]="Hello,my name is alan.";
    put1(names);

    return 0;
}

void put1(const char * string)
{
    while(*string!='\0')
    {
        putchar(*string++);
    }
}