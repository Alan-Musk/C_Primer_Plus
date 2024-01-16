// 编写一个函数,用户提供月份号,该函数就返回一年中到该月为止(包括该月)的总天数,假设在所有函数的外部申明了第3题的结构模板和一个该类型结构的数组
#include <stdio.h>

struct month{
    char name[40];
    char sort[4];
    int days;
    int number;
};
int day(struct month *,int n);
int main(void)
{
    struct month months[12]={{"January","JAY",31,1},{"February","FEB",28,2},{"March","MAR",31,3},{"April","APR",30,4},
        {"May","MAY",31,5},{"June","JUN",30,6},{"July","JUL",31,7},{"August","AUG",31,8},{"September","SEP",30,9},
        {"October","OCT",31,10},{"November","NOV",30,11},{"December","DEC",31,12}
    };
    int mon;
    printf("请输入截止的月份");
    scanf("%d",&mon);
    int days=day(months,mon);
    printf("一共是%d天",days);
    return 0;
}
int day(struct month * months,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=months[i].days;
    }

    return sum;
}