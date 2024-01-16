// 编写一个程序,提示用户输入3组数,每组数包括5个double类型的数(假设用户都正确的响应,不会输入非数值数据).该程序应完成下列任务
// a.把用户输入的数据存储在3*5的数组中     b.计算每组(5个)数据的平均值  c.计算所有数据的平均数
// d.找出这15个数据中的最大值           e.打印结果
// 每个任务都要用单独的函数来完成(使用传统C处理数组的方式).完成任务b,要编写一个计算并返回一维数组平均值的函数.利用循环调用该函数3次.
// 对于其他任务的函数,应该把整个数组作为参数,完成任务c和d的函数应该把结果返回主调函数
#include <stdio.h>
#define ROWS 3
#define COLS 5
void memory(double nums[][COLS]);
double averb(double nums[][COLS],int row);//返回一维数组的首元素地址,后测试,在函数中声明的数组在完成函数调用后会结束生命周期,故报错
double averc(double nums[][COLS]);//计算所有数据的平均数
double maxNum(double numsp[][COLS]);//最大值
void show(double average[],double num,double max);
int main(void)
{
    int i;
    double nums[ROWS][COLS];
    double aver[3];
    double averageAll=0;
    double max=0;
    memory(nums);
    for(i=0;i<ROWS;i++)
    {
        aver[i]=averb(nums,i);
    }
    averageAll=averc(nums);
    max=maxNum(nums);
    show(aver,averageAll,max);
}
//a
void memory(double nums[][COLS])
{
    int i,j;
    double num;
    for(i=0;i<ROWS;i++)
    {
        printf("请输入五组数:");
        for(j=0;j<COLS;j++)
        {
            scanf("%lf",&num);
            nums[i][j]=num;
        }
    }
}

double averb(double nums[][COLS],int rwo)
{
    int i;
    double tot=0;

    for(i=0;i<COLS;i++)
    {
        tot+=nums[rwo][i];
    }
    return tot/COLS;
}

double averc(double nums[][COLS])//计算所有数据的平均数
{
    int i,j;
    double tot=0;
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            tot+=nums[i][j];
        }
    }
    return tot/(ROWS*COLS);
}
double maxNum(double nums[][COLS])
{
    double max=0;
    int i,j;
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            if(max<nums[i][j])
            {
                max=nums[i][j];
            }
        }
    }
    return max;
}
void show(double average[],double num,double max)
{
    int i;
    for(i=0;i<ROWS;i++)
    {
        printf("第%d次输入的平均数是:%lf\n",i+1,average[i]);
    }
    printf("所有数的平均数是:%lf\n",num);
    printf("最大值是%lf\n",max);
}