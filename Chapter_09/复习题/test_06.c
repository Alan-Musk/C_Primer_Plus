// 设计一个名为alter()的函数,接受两个int类型的变量x和y,把他们的值分别改成两个变量之和以及两个变量之差
#include <stdio.h>

void alter(int * num1,int * num2);
int main(void)
{
    int num1;
    int num2;
    printf("请输入两个整数:");
    scanf("%d %d",&num1,&num2);
    alter(&num1,&num2);

    return 0;
}

void alter(int * num1,int * num2)
{
    int temp;
    temp=*num1;
    *num1=*num1+*num2;
    *num2=temp-*num2;
     printf("前者变成两数之和=%d,后者变成两数之差=%d\n",*num1,*num2);
}