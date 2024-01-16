//编写一个程序,要求用户输入一个上限整数和一个下限整数,计算从上限到下限的范围内所有整数的平方和,并显示计算结果
//然后程序继续提示用户输入上限和下限整数,并显示结果,直到用户输入的上限整数等于或小于下限整数为止.运行示例如下

#include <stdio.h>
int count(int num1,int num2);

int main(void)
{
    int num1,num2;
    printf("Enter lower and upper integer limits:");
    scanf("%d %d",&num1,&num2);

    while(num1<num2)
    {
        printf("The sums of the squares for %d to %d is %d\n",num1*num1,num2*num2,count(num1,num2));
        printf("Enter next set of limits:");
        scanf("%d %d",&num1,&num2);
    }
    printf("Done\n");
    return 0;
}

int count(int num1,int num2)
{
    int sum=0;

    for(;num1<=num2;num1++)
    {
        sum=num1*num1+sum;
   }

    return sum;
}