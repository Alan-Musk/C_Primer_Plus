// 编写一个函数,把两个数组中相对应的元素相加,然后把结果存储到第三个数组中.也就是说,如果数组1中包含的值是2,4,5,8,数组2中包含的值是1,0,4,6.
// 那么该函数把3,4,9,14赋给第三个数数组.函数接受3个数组名和一个数字数组大小,在一个简单的程序中测试该函数
#include <stdio.h>
#define SIZE 4
void count(int array1[],int array2[],int array3[],int n);

int main(void)
{
    int array1[SIZE]={2,4,5,8};
    int array2[SIZE]={1,0,4,6};
    int array3[SIZE];
    count(array1,array2,array3,SIZE);

    return 0;
}

void count(int array1[],int array2[],int array3[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        array3[i]=array1[i]+array2[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",array3[i]);
    }
}