// 编写一个程序,初始化一个doube类型的3*5二维数组,使用一个处理变长数组的函数将其拷贝至另一个二维数组中.
// 还要编写一个以变长数组为形参的函数以显示两个数组的内容.这两个函数应该能处理N*M数组(如果编译器不支持变长数字,就使用传统C函数处理N*5的数字)

#include <stdio.h>
void copy(int num1,int num2,double source[][5],double array[num1][num2]);
void show_array(int num1,int num2,double array1[num1][num2],double array2[num1][num2]);
int main(void)
{
    int num1,num2;
    num1=3;
    num2=5;
    double numbers [3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    double nums[num1][num2];
    copy(num1,num2,numbers,nums);
    show_array(num1,num2,numbers,nums);
    return 0;

}

void copy(int num1,int num2,double source[][5],double array[num1][num2])
{
    int i,j;
    for(i=0;i<num1;i++)
    {
        for(j=0;j<num2;j++)
        {
            array[i][j]=source[i][j];
        }
    }
}
void show_array(int num1,int num2,double array1[num1][num2],double array2[num1][num2])
{
    int i,j;
    for(i=0;i<num1;i++)
    {
        for(j=0;j<num2;j++)
        {
            printf("array1:[%d][%d]=%.1lf\t",i,j,array1[i][j]);
            printf("array2:[%d][%d]=%.1lf\n",i,j,array2[i][j]);
        }
    }
}