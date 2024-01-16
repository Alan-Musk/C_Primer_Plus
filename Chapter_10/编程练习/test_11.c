// 编写一个程序,声明一个int类型的3*5二维数组,并用合适的值初始化它,该程序打印数组中的值,然后各值翻倍(即原数的2倍),并显示出各元素的新值.
// 编写一个函数显示数组的内容,在编写一个函数把各元素翻倍.这两个函数都以数组名和行数作为参数 注:书中写函数名,估计写错了

#include <stdio.h>
void show_array(int nums[][5],int n);
void arrise(int nums[][5],int n);
int main(void)
{
    int nums[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    show_array(nums,3);
    arrise(nums,3);
    show_array(nums,3);

}
void show_array(int nums[][5],int n)
{
    int i,j;
    int cols=sizeof(nums[0])/sizeof(nums[0][0]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("nums[%d][%d]=%d\n",i,j,nums[i][j]);
        }
    }
}
void arrise(int nums[][5],int n)
{
    int i,j;
    int cols=sizeof(nums[0])/sizeof(nums[0][0]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<cols;j++)
        {
            nums[i][j]*=2;
        }
    }
}