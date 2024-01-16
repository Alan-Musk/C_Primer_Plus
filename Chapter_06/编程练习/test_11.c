//编写一个程序,在数组中读入8个整数,然后按倒序打印这八个整数

#include <stdio.h>

int main(void)
{
    int nums[8],i;
    printf("请输入八个整数");
    //传入
    for(i=0;i<8;i++)
    {
        scanf("%d",&nums[i]);
    }
    //输出
    for(i=0;i<8;i++)
    {
        printf("%d",nums[i]);
    }
    printf("\n");

    return 0;
}