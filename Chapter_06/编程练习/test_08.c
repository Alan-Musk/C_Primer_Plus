//编写一个程序,要求用户输入两个浮点数,并打印两数之差除以两数乘积的结果.在用户输入非数字之前,程序应循环用户输入的每对值

#include <stdio.h>

int main(void)
{
    float num1,num2;

    printf("请输入两个浮点数:");


    for(;scanf("%f %f",&num1,&num2)!=0;)
    {
        printf("%.5f\n",(num1-num2)/(num1*num2));
        printf("请输入两个浮点数:");
    }
    return 0;
}