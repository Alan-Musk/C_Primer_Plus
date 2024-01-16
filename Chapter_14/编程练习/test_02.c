// 编写一个函数,提示用户输入日,月,年.月份可以是月份号,月份名或月份名的缩写.然后该程序应返回一年中到用户指定日子(包括这一天)的总天数
#include <stdio.h>

struct month{
    char name[10];
    char sort[4];
    int days;
    int number;
};

int days(struct month *,int,int);

int main(void)
{
    int day,mon,year;
    struct month months[12]={{"January","JAY",31,1},{"February","FEB",28,2},{"March","MAR",31,3},{"April","APR",30,4},
        {"May","MAY",31,5},{"June","JUN",30,6},{"July","JUL",31,7},{"August","AUG",31,8},{"September","SEP",30,9},
        {"October","OCT",31,10},{"November","NOV",30,11},{"December","DEC",31,12}
    };
    printf("请按日 月 年格式输入:");
    scanf("%d %d %d",&day,&mon,&year);
    printf("一共是%d天\n",days(months,day,mon));
    return 0;
}
int days(struct month * months,int day,int month)
{
    int i=0;
    int sum=0;
    while(i<month-1)
    {
        sum+=months[i].days;
        i++;
    }
    return sum+day;
}