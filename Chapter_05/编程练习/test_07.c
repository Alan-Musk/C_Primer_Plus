//编写一个程序,提示用户输入一个double类型的数,并打印该数的立方值
//自己设计一个函数计算并打印立方值,main()函数要把用户输入的值传递给该函数
#include <stdio.h>

float count(double num);
int main(void)
{
    double num;
    printf("请输入要求的值:");
    scanf("%lf",&num);

    printf("%.1f的立方值是 %.1f\n",num,count(num));
}

float count(double num)
{
    num=num*num*num;

    return num;
}
