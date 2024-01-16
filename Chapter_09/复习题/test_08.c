//编写一个函数,返回3个整数参数中的最大值
#include <stdio.h>

int max(int num1,int num2,int num3);

int main(void)
{
    int num1,num2,num3;
    printf("请输入三个整数:");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("最大值为:%d\n",max(num1,num2,num3));

    return 0;
}

int max(int num1,int num2,int num3)
{
    int max=num1;

    if(num2>max)
    {
        max=num2;
    }
    if(num3>max)
    {
        max=num3;
    }

    return max;
}