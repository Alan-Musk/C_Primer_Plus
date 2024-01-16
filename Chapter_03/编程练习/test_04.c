#include <stdio.h>

int main(void)
{
    float num=0.0;
    printf("Enter a floating-point value:");
    scanf("%f",&num);

    //小数点
    printf("fixed-point notation:%f\n",num);
    //指数形式
    printf("exponential notation:%e\n",num);
    //p计数法(十六进制计数法)
    printf("p notation:%a\n",num);
    return 0;
}