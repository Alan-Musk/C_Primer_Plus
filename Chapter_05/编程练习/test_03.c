//编写一个程序,提示用户输入天数,然后将其转换成周数和天数
//例如,用户输入18,则转换成2周4天,以下面的格式显示结果
//18 days are 2 weeks, 4 days.
#include <stdio.h>
#define DAY_WEEK 7
int main(void)
{
    int days;
    printf("请输入要转换的天数:");
    scanf("%d",&days);

    printf("%d days are %d week, %d days\n",days,days/DAY_WEEK,days%DAY_WEEK);

    return 0;
}