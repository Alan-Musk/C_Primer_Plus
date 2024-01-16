#include <stdio.h>
#define SEC_PER_YEAR 3.156e7 //通过预编译指令定义每年的秒数

int main(void)
{
    int years=0;
    printf("输入你的年龄:");
    scanf("%d",&years);

    printf("您已存活:%e秒\n",years*SEC_PER_YEAR);

    return 0;
}