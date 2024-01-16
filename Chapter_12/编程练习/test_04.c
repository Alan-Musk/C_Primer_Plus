// 在一个循环中编写并测试一个函数,该函数返回它被调用的次数
#include <stdio.h>
int time();
int times=0;
int main(void)
{
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        time();
    }
    printf("调用了%d次",times);
    return 0;
}

int time()
{
    printf("温柔且坚定,知足且上进\n");
    times++;
    return times;
}