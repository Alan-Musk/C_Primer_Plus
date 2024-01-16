// 编写一个函数,把double类型数组中的数据倒序排列,并在一个简单的程序中测试该函数
#include <stdio.h>
#define SIZE 5
void sort(double * nums,int n);

int main(void)
{
    double nums[SIZE]={1,25,67,8,54};
    sort(nums,SIZE);
    return 0;
}
void sort(double * nums,int n)
{
    int i,j;
    int temp;
    for(i=n;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            if(nums[j]<nums[j+1])
            {
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%lf\n",nums[i]);
    }
}