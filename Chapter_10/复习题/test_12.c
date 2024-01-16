// 下面声明了3个数组: double trots[20];short clops[10][30];long shots[5][10][15]
// a.分别以传统方式和以变长数组为参数的方式编写处理trots数组的void函数原型和函数调用
// b.分别以传统方式和以变长数组为参数的方式编写处理clops数组的void函数原型和函数调用
// c.分别以传统方式和以变长数组为参数的方式编写处理shots数组的void函数原型和函数调用

#include <stdio.h>
void array1(double trots[],int num);
void array2(int num,double trots[num]);
void array3(short clops [] [30],int num1,int num2);
void array4(int num1,int num2,short clops [num1] [num2]);
void array5(int num1,int num2,int num3,long shots [5] [10][15]);
void array6(int num1,int num2,int num3,long shots [num1] [num2][num3]);

int main(void)
{
    int num1,num2,num3;
    double trots[20]={1,2,3,4,5,6,7,8,9,10};//array1,array2
    short clops[10][30]={{1,2,3,4},{5,6,7},{8,9,10,11}};
    long shots [5] [10][15]={{{1,2,3,4}},{{5,6,7},{8,9,10}},{{11,12}}};
    // a
    num1=sizeof(trots)/sizeof(trots[0]);
    array1(trots,num1);
    scanf("%d",&num1);
    array2(num1,trots);
    // b
    num2=sizeof(clops[0])/sizeof(clops[0][0]);
    num1=sizeof(clops)/sizeof(clops[0]);
    printf("num1=%d,num2=%d",num1,num2);
    array3(clops,num1,num2);
    printf("请输入行列");
    scanf("%d %d",&num1,&num2);
    array4(num1,num2,clops);
    // c
    num1=sizeof(shots)/sizeof(shots[0]);
    num2=sizeof(shots[0])/sizeof(shots[0][0]);
    num3=sizeof(shots[0][0])/sizeof(shots[0][0][0]);
    array5(num1,num2,num3,shots);
    printf("请输入层行列");
    scanf("%d %d %d",&num1,&num2,&num3);
    array6(num1,num2,num3,shots);

    num3=sizeof(clops[0][0]);

    return 0;
}

void array1(double trots[],int num)
{
    int i;
    double sum=0;
    for(i=0;i<num;i++)
    {
        sum+=trots[i];
    }

    printf("传统处理trots数组的总和为:%.1lf\n",sum);
}

void array2(int num,double trots[])
{
    int i;
    double sum=0;
    for(i=0;i<num;i++)
    {
        sum+=trots[i];
    }

    printf("变长数组处理trots数组的总和为:%.1lf\n",sum);
}

void array3(short clops [] [30],int num1,int num2)
{
    int sum=0;
    int i,j;
    for(i=0;i<num1;i++)
    {
        for(j=0;j<num2;j++)
        {
            sum+=clops[i][j];
        }
    }
    printf("传统处理clops数组的总和为:%d\n",sum);
}

void array4(int num1,int num2,short clops [num1] [num2])
{
    int sum=0;
    int i,j;
    for(i=0;i<num1;i++)
    {
        for(j=0;j<num2;j++)
        {
            sum+=clops[i][j];
        }
    }
    printf("变长数组处理clops数组的总和为:%d\n",sum);
}

void array5(int num1,int num2,int num3,long shots [5] [10][15])
{
    int i,j,k;
    int sum=0;
    for(i=0;i<num1;i++)
    {
        for(j=0;j<num2;j++)
        {
            for(k=0;k<num3;k++)
            {
                sum+=shots[i][j][k];
            }
        }
    }
    printf("传统处理shots数组的总和为:%d\n",sum);
}
void array6(int num1,int num2,int num3,long shots [num1] [num2][num3])
{
    int i,j,k;
    int sum=0;
    for(i=0;i<num1;i++)
    {
        for(j=0;j<num2;j++)
        {
            for(k=0;k<num3;k++)
            {
                sum+=shots[i][j][k];
            }
        }
    }
    printf("变长数组shots数组的总和为:%d\n",sum);
}