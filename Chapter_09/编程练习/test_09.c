// 使用递归函数重写变写编程练习8
#include <stdio.h>
double power(double n,int p);

int main(void)
{
    double x,xpow;
    int exp;

    printf("输入一个数字和幂次:");
    while(scanf("%lf %d",&x,&exp)==2)
    {
        xpow=power(x,exp);
        printf("%g的%d次幂是=%g\n",x,exp,xpow);
        printf("输入一个数字和幂次:");
    }
    printf("Done!\n");

    return 0;
}

double power(double n,int p)
{
    double pow=1;
    int i;
    if(n==0&&p==0)
    {
        printf("该数未定义");
        return 1;
    }
    if(n==0) return 0;
    if(p==0) return 1;
    if(p>0)
    {
        return n*power(n,p-1);
    }
    else
    {
        return power(n,p+1)/n;
    }
}