// 不适用全局变量,重写程序清单12.4
#include <stdio.h>
int critic(int num);
int main(void)
{
    int units;
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d",&units);
    while(units!=56)
    {
        units=critic(units);
    }
    printf("You must have looked it up!\n");

    return 0;
}

int critic(int num)
{
    //删除了可选的重复声明
    printf("No luck, my friend.Try agian.\n");
    scanf("%d",&num);

    return num;
}