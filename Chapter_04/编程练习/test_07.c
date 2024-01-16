//编写一个程序,将一个double类型的变量设置为1.0/3.0,一个float类型的变量设置为1.0/3.0
//分别显示两次计算的结果各三次:一次显示小数点后面6位数字;一次显示小数点后面12位数字,一次显示小数点后面16位数字
//程序中要包含float.h头文件,并显示FLT_DIG和DBL_DIG的值,1.0/3.0的值与这些值一致吗
#include <stdio.h>
#include <float.h>

int main(void)
{
    double num1=1.0/3.0;
    float num2=1.0/3.0;

    printf("第一次计算:\n");
    printf("%.6f\n%.6f\n",num1,num2);
    printf("第二次计算:\n");
    printf("%.12f\n%.12f\n",num1,num2);
    printf("第三次计算:\n");
    printf("%.20f\n%.16f\n",num1,num2);

    printf("FLT_DIG是:%d DBL_DIG是:%d\n",FLT_DIG,DBL_DIG);

    //总结,最精确位一致
    return 0;
}