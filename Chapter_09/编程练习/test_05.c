// 编写并测试一个函数larger_of(),该函数把两个double类型变量的值替换为较大的值.
// 例如:larger_of(x,y)会把x和y中较大的值重新赋值给两个变量
#include <stdio.h>
void larger_of(double * num1,double * num2);

int main(void)
{
    double num1,num2;
    printf("请输入两个数:");
    scanf("%lf %lf",&num1,&num2);
    printf("%.1lf %.1lf\n",num1,num2);
    larger_of(&num1,&num2);
    printf("%.1lf %.1lf\n",num1,num2);

    return 0;
}

void larger_of(double * num1, double * num2)
{
    if(*num1 > *num2)
    {
        *num2=*num1;
    }
    else
    {
        *num1=*num2;
    }
}