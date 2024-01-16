//编写一个程序,创建两个包含8个元素的double类型数组,使用循环提示用户为第一个数字输入8个值.第二个数组元素的值设置为第一个数组对应元素的累计之和
//例如第二个数组的第四元素,是第一个数组前4个元素之和.最后,使用循环显示两个数组的内容,第一个数组显示成一行,第二个数组显示在第一个数组的下一行,而且每个元素都与第一个相对应

#include <stdio.h>

int main(void)
{
    double num1[8];
    double num2[8];
    int i,j,sum;

    printf("请为第一个数组输入值:");
    for(i=0;i<8;i++)
    {
        scanf("%lf",&num1[i]);
    }
    //为第二个数组赋值
    for(i=0;i<8;i++)
    {
        sum=0;
        for(j=0;j<=i;j++)
        {
            sum=sum+num1[j];
        }
        num2[i]=sum;
    }
    //输出第一个数组
    for(i=0;i<8;i++)
    {
        printf("%6.2lf",num1[i]);
    }
    printf("\n");
    //输出第二个数组
    for(i=0;i<8;i++)
    {
        printf("%6.2f",num2[i]);
    }
    printf("\n");
    return 0;
}