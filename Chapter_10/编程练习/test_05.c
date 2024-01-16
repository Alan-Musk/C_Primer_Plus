// 编写一个函数,返回存储在double类型数组中的最大值和最小值的差值,并在一个简单的程序中测试该函数
// 读者:实现一个冒泡排序吧
#include <stdio.h>
double sort(double * nums,int n);

int main(void)
{
    double removeNum;
    double nums[5]={1,2,3,4,5};
    removeNum=sort(nums,5);
    printf("最大值和最小值的差距为%lf\n",removeNum);

    return 0;
}

double sort(double * nums,int n)
{
    int i;
    int temp;
    if(n>0)
    {
        for(i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                temp=nums[i+1];
                nums[i+1]=nums[i];
                nums[i]=temp;
            }
        }
        sort(nums,--n);
    }
    return nums[4]-nums[0];
}