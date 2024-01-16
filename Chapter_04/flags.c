//flags.c -- 演示一些格式标记
#include <stdio.h>
int main(void)
{
    printf("%x %X %#x\n",31,31,31);
    printf("**%d**% d**% d",42,42,-42);
    printf("**%5d**%5.3d**%05d**%05.3d\n",6,6,6,6);
    //.数字的优先级比0高
    return 0;
}