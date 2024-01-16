//设计一个函数,返回两整数之和
#include <stdio.h>

int sum(int num1,int num2);
int main(void)
{
    int num1,num2;
    printf("请输入两个整数:");
    scanf("%d %d",&num1,&num2);
    printf("%d + %d = %d\n",num1,num2,sum(num1,num2));

    return 0;
}

int sum(int num1,int num2)
{
    int sum=num1+num2;

    return sum;
}