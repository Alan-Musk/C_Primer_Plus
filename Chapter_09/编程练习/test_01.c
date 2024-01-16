// 设计一个函数min(x,y),返回两个double类型的较小值.在一个简单的驱动程序中测试该函数
#include <stdio.h>

double min(double x,double y);

int main(void)
{
    double num1,num2;
    printf("请输入两个数:");
    scanf("%lf %lf",&num1,&num2);
    printf("两个数中更小的是:%.1lf\n",min(num1,num2));

    return 0;
}

double min(double x,double y)
{
    return x<y ? x : y ;
}