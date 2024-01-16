// 以变长数组作为函数形参,完成编程练习13
#include <stdio.h>
#define ROWS 3
#define COLS 5
void memory(int numbers1,int numbers2,double nums[numbers1][numbers2]);
double averb(int numbers1,int numbers2,double nums[numbers1][numbers2],int row);//返回一维数组的首元素地址,后测试,在函数中声明的数组在完成函数调用后会结束生命周期,故报错
double averc(int numbers1,int numbers2,double nums[numbers1][numbers2]);//计算所有数据的平均数
double maxNum(int numbers1,int numbers2,double numsp[numbers1][numbers2]);//最大值
void show(int num1,double average[num1],double num,double max);
int main(void)
{
    int i;
    double nums[ROWS][COLS];
    double aver[3];
    double averageAll=0;
    double max=0;
    memory(ROWS,COLS,nums);
    for(i=0;i<ROWS;i++)
    {
        aver[i]=averb(ROWS,COLS,nums,i);
    }
    averageAll=averc(ROWS,COLS,nums);
    printf("22");
    max=maxNum(ROWS,COLS,nums);
    printf("33");
    show(ROWS,aver,averageAll,max);
}
//a
void memory(int numbers1,int numbers2,double nums[numbers1][numbers2])
{
    int i,j;
    double num;
    for(i=0;i<numbers1;i++)
    {
        printf("请输入五组数:");
        for(j=0;j<numbers2;j++)
        {
            scanf("%lf",&num);
            nums[i][j]=num;
        }
    }
}

double averb(int numbers1,int numbers2,double nums[numbers1][numbers2],int row)
{
    int i;
    double tot=0;

    for(i=0;i<numbers2;i++)
    {
        tot+=nums[row][i];
    }
    return tot/numbers2;
}

double averc(int numbers1,int numbers2,double nums[numbers1][numbers2])
{
    int i,j;
    double tot=0;
    for(i=0;i<numbers1;i++)
    {
        for(j=0;j<numbers2;j++)
        {
            tot+=nums[i][j];
        }
    }
    return tot/(numbers1*numbers2);
}
double maxNum(int numbers1,int numbers2,double nums[numbers1][numbers2])
{
    double max=0;
    int i,j;
    for(i=0;i<numbers1;i++)
    {
        for(j=0;j<numbers2;j++)
        {
            if(max<nums[i][j])
            {
                max=nums[i][j];
            }
        }
    }
    return max;
}
void show(int num1,double average[num1],double num,double max)
{
    int i;
    for(i=0;i<num1;i++)
    {
        printf("第%d次输入的平均数是:%lf\n",i+1,average[i]);
    }
    printf("所有数的平均数是:%lf\n",num);
    printf("最大值是%lf\n",max);
}