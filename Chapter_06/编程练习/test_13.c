//编写一个程序,创建一个包含8个元素的int类型数组,分别把数组元素设置为2的前八次幂
//使用for循环设置数组元素的值,使用do while循环显示数组元素的值
#include <stdio.h>

int main(void)
{
    int nums[8];
    int i,j,sum;
    for(i=0;i<8;i++)
    {
        sum=2;
        for(j=0;j<i;j++)
        {
            sum=sum*2;
        }
        nums[i]=sum;
    }
    i=0;
    do
    {
        printf("数组下标为%d的值为:%d\n",i,nums[i]);
        i++;
    }while(i<8);

    return 0;
}