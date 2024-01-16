//修改练习8,使用函数返回计算结果
#include <stdio.h>

float figure(float num1,float num2);

int main(void)
{
    float num1,num2;
    printf("请输入两个浮点数");

    for(;scanf("%f %f",&num1,&num2);)
    {
        printf("%.5f\n",figure(num1,num2));
        printf("请输入两个浮点数");
    }

    return 0;
}

float figure(float num1,float num2)
{
    float count;
    count=(num1-num2)/(num1*num2);

    return count;
}