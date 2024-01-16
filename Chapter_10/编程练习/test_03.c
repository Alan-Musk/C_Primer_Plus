// 编写一个程序,返回存储在int类型数组中的最大值,并在一个简单的程序中测试该函数
#include <stdio.h>
int max(int * nums,int size);
int main(void)
{
    int maxNum;
    int nums[5]={1,108,8,32,68};
    maxNum=max(nums,5);
    printf("最大值是:%d\n",maxNum);

    return 0;
}

int max(int * nums,int size)
{
    int max=0,i;
    for(i=0;i<size;i++)
    {
        if(max<nums[i])
        {
            max=nums[i];
        }
    }

    return max;
}