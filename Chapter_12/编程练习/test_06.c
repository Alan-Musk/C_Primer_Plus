// 编写一个程序,生成1000个1~10范围内的随机数.不用保存或打印这些数字,仅打印每个数出现的次数.
// 用10个不同的种子值运行,生成的数字出现的次数是否相同?可以使用本章自定义的函数或ANSI C的rand()和srand()函数,它们的格式相同.
// 这是一个测试特定随机数生成器随机性的方法
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMBER 10000
int main(void)
{
    int num[NUMBER][2]={{0,0}};
    int temp=0;
    srand((unsigned int)time(0));
    //输入
    for(int i=0;i<NUMBER;i++)
    {
        temp=rand();
        num[i][0]=temp;
        num[i][1]=1;
        for(int j=0;j<i;j++)
        {
            if(temp==num[j][0])
            {
                num[j][1]++;
            }
        }
    }
    //输出
    for(int i=0;i<NUMBER;i++)
    {
        printf("%d出现%d次\n",num[i][0],num[i][1]);
    }


    return 0;
}