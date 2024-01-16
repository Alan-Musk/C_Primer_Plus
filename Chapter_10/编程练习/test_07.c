// 编写一个程序,初始化一个double类型的二维数组,使用编程练习2中的一个拷贝函数把该数组中的数据拷贝到另一个二维数组中
//(因为二维数组是数组的数组,所以可以使用处理一维数组的拷贝函数来处理数组中的每个子数组)
#include <stdio.h>
void copy(double  (*nums) [3],double  source [][3],int row,int col);
int main(void)
{
    double array[2][3]={{1,2,3},{4,5,6}};
    double array2[2][3]={{0,0,0},{0,0,0}};
    copy(array2,array,2,3);

    return 0;
}

void copy(double (*nums) [3],double source [][3],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            nums[i][j]=source[i][j];
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("array:[%d][%d]=%lf\n",i,j,nums[i][j]);
        }
    }

}