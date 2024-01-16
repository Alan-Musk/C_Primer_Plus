// 编写一个程序,生成1000个1~10范围内的随机数,并以降序排列(可以把11章的排序算法稍加改动,便可用于整数排序,这里仅对整数排序)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define NUMBER 1000
int main(void)
{
    int num[NUMBER];

    srand((unsigned int)time(0));//随机种子
    //生成
    for(int i=0;i<NUMBER;i++)
    {
        num[i]=rand()%10+1;
    }
    //排序
    for(int i=0;i<NUMBER;i++)
    {
        for(int j=NUMBER;j>0;j--)
        {
            int temp=0;
            if(num[j]<num[j+1])
            {
                temp=num[j+1];
                num[j+1]=num[j];
                num[j]=temp;
            }
        }
    }
    //输出
    for(int i=0;i<NUMBER;i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}