// 编写并测试一个函数,该函数以3个double变量的地址作为参数,把最小值放在第一个变量,中间值放于第二个变量,最大值放在第三个变量
#include <stdio.h>
void sort(double * num1,double * num2,double * num3);

int main(void)
{
    double num1,num2,num3;
    printf("请输入三个数字:");
    scanf("%lf %lf %lf",&num1,&num2,&num3);
    printf("排序前:%lf %lf %lf\n",num1,num2,num3);
    sort(&num1,&num2,&num3);
    printf("排序后:%lf %lf %lf\n",num1,num2,num3);

    return 0;
}

void sort(double * num1,double * num2,double * num3)
{
    double temp;
    if(*num1>*num2)
    {
        temp=*num2;
        *num2=*num1;
        *num1=temp;
    }
    if(*num1>*num3)
    {
        temp=*num3;
        *num3=*num1;
        *num1=temp;
    }
    if(*num2>*num3)
    {
        temp=*num3;
        *num3=*num2;
        *num2=temp;
    }

}