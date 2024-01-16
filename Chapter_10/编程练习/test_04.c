// 编写一个函数,返回存储在double类型数组中最大值的下标,并在一个简单的程序中测试该函数
#include <stdio.h>
int index(double * nums,int size);

int main(void)
{
    int indexMax;
    double nums[5]={192.2,3435.2,24532,2,5};
    indexMax=index(nums,5);
    printf("最大值的下标为%d\n",indexMax);
    return 0;
}

int index(double * nums,int size)
{
    int max=0,i;
    int index;
    for(i=0;i<size;i++)
    {
        if(max<nums[i])
        {
            max=nums[i];
            index=i;
        }
    }


    return max;
}