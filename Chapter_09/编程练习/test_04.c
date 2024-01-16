// 两数的调和平均数这样计算:先得到两个的倒数,然后计算两个倒数的平均值,最后取计算结果的倒数.
// 编写一个函数,接受两个duoble类型的参数,返回这两个参数的调和平均数
#include <stdio.h>
double aver(double num1,double num2);
int main(void)
{
    double num1,num2;
    printf("请输入两个数:");
    scanf("%lf %lf",&num1,&num2);
    printf("调和平均数为:%lf\n",aver(num1,num2));

    return 0;
}

double aver(double num1,double num2)
{
    return 1/((1/num1+1/num2)/2);
}