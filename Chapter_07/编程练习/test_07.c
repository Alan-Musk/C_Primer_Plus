//编写一个程序,提示用户输入一周工作的小时数,然后打印工资总额,税金和净收入.假如做以下假设
//a.基本工资=10.00美元/小时
//b.加班(超过40小时)=1.5倍时间
//c.税率:前300美元为15% 续150美元为20% 余下的为25%
#include <stdio.h>

#define SALARY 10.00
#define LATE 40
#define FRONT 0.15
#define MIDDLE 0.20
#define BEHIDE 0.25

int main(void)
{
    float hours;
    double money;
    printf("请输入你的一周工作时长(输入0退出):");
    while(scanf("%f",&hours),hours>0)
    {
        if(hours>LATE)
        {
            hours=(hours-LATE)*1.5+LATE;
        }
        money=hours*SALARY;
        if(money<=300)
        {
            printf("工资总额是:%.2lf 税金是:%.2lf",money,money*FRONT);
            money-=money*FRONT;
            printf(" 净收入是%.2lf\n",money);
        }
        else if(money<=450)
        {
            printf("工资总额是:%.2lf 税金是:%.2lf",money,(300*FRONT+(money-300)*MIDDLE));
            money-=(300*FRONT+(money-300)*MIDDLE);
            printf(" 净收入是%.2lf\n",money);
        }
        else
        {
            printf("工资总额是:%.2lf 税金是:%.2lf",money,(300*FRONT+150*MIDDLE+(money-450)*BEHIDE));
            money-=(300*FRONT+150*MIDDLE+(money-450)*BEHIDE);
            printf(" 净收入是%.2lf\n",money);
        }
        printf("请输入你的一周工作时长(输入0退出):");
    }
    printf("Done!\n");

    return 0;
}