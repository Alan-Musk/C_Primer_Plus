//使用编程练习2中的拷贝函数,把一个内含7个元素的数组中第3~第5个元素拷贝至内含3个元素的数组中
// 该函数本身不需要修改,只需要选择合适的实际参数(实际参数不需要是数组名和数组大小,只需要是数组元素的地址和待处理元素的个数)
#include <stdio.h>
void copy(int nums[],int nums2[3],int n);
int main(void)
{
    int nums[7]={1,2,3,4,5,6,7};
    int nums2[3];
    copy(&nums[2],nums2,3);

    return 0;
}

void copy(int nums[],int nums2[3],int n)
{
    for(int i=0;i<n;i++)
    {
        nums2[i]=nums[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",nums2[i]);
    }
}