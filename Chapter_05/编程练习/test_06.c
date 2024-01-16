//修改编程练习5的程序,使其能计算整数的平方和(可以认为第一天赚$1,第二天赚$4,第三天赚$9).
//C没有平方函数,但是可以用n*n来表示n的平方
#include <stdio.h>

int main(void)
{
    int days,sum=0;
    int i=0;


    printf("请输入要计算的天数:");
    scanf("%d",&days);

    while(i<days)
    {
        i++;
        sum=i*i+sum;
    }
    printf("总和为:%d\n",sum);

    return 0;
}