//Chukie Lucky赢得100万美元(税后),他将奖金存入年利率8%的账户,在每年的最后一天,Chukie 取出10万美元,编写一个程序,计算多少年后,钱会被取完
#include <stdio.h>
#define RATE 0.08
#define GET 10

int main(void)
{
    int years;
    float sum;


    for(years=1,sum=100.0;sum>0;years++)
    {
        sum*=(1+RATE);
        sum-=10;
    }

    printf("Chukie 会在%d年后取完所有的钱\n",years);

    return 0;
}