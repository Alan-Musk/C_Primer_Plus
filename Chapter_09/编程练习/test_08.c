// 第六章的程序清单6.20中,power()函数返回一个double类型数的正整数次幂.改进该函数,使其能正确计算负幂.
// 另外,函数要处理0的任何次幂都为0,任何数的0次幂都为1(函数应报告0的0次幂未定义,因此把该值处理为1).要使用一个循环,并在程序中测试该函数
#include <stdio.h>
double power(double n,int p);

int main(void)
{
    double num,numPow;
    int exp;
    printf("请输入要计算的数及次幂:");
    while(scanf("%lf%d",&num,&exp)==2)
    {
        numPow=power(num,exp);
        printf("%lf 的 %d次方是:%lf\n",num,exp,numPow);
        printf("请输入要计算的数及次幂:");
    }
    printf("Done!\n");

    return 0;
}

double power(double n,int p)
{
    double numPower=1;
    int i;  //循环
    if(n==0)
    {
        if(p==0)
        {
            printf("0的0次方未定义");
        }
        numPower=1;
    }
    if(p==0)
    {
        numPower=1;
    }
    if(p<0)
    {
        for(i=1;i<=-p;i++)
        {
            numPower*=n;
        }
        numPower=1/numPower;
    }
    else
    {
        for(i=1;i<=p;i++)
        {
            numPower*=n;
        }
    }

    return numPower;
}