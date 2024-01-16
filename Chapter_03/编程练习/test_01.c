#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(void)
{
    //有符号整数类型最大值是2的31次方减1
    int big_int=2147483647;
    //浮点型数据的最大值一般是3.4E38
    float big_float=3.4e38;
    //浮点型数据的有效位为6位
    float small_float=10.0/3;
    //整数类型最大值+1,就会造成越界,变成-2的31次方+1
    printf("The big int data is %d\n",big_int+1);
    //浮点类型最大值*10会越界,输入inf,如果浮点数据只加一个小数据,由于其精确度的限制,不会造成越界
    printf("The big float data is %f,but only add 1:%f\n",big_float*10,big_float+1);
    //浮点数下溢会导致精度损失
    printf("The float data is %f\n",small_float);
    //打印最大的浮点数
    printf("The MAX float data is %f\n",FLT_MAX+1);//如果在FLT_MAX+1,系统会忽略
    //打印最大的整数
    printf("THe MAX int data is %d\n",INT_MAX);

    return 0;
}