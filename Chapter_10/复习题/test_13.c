//下面有两个函数原型:
// void show(const double ar[],int n);      void show2(const double ar2[][3],int n);
// a.编写一个函数调用,把一个内含8,3,9和2的复合字面量传递给show()函数
// b.编写一个函数调用,把一个2行3列的复合字面量(8,3,9作为第一行,5,4,1作为第二行)传递给show2()函数
#include <stdio.h>
void show(const double ar[],int n);
void show2(const double ar2[][3],int n);

int main(void)
{
    show((int[4]){8,3,9,2},4);
    show2((int[][3]){{8,3,9}{5,4,1}},2);
    return 0;
}

void show(const double ar[],int n)
{
    int i;
    double sum=0;
    for(i=0;i<n;i++)
    {
        sum+=ar[i];
    }
    printf("总和为%.1lf\n",sum);
}