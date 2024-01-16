// 重新编写复习题5,用月份名的拼写代替月份号(别忘了用strcmp()).在一个简单的程序中测试该函数
#include <stdio.h>
#include <string.h>
struct month{
    char name[40];
    char sort[4];
    int days;
    int number;
};
char * s_gets(char * st,int n);
int day(struct month *,char st[]);
int main(void)
{
    char mon[20];
    struct month months[12]={{"January","JAY",31,1},{"February","FEB",28,2},{"March","MAR",31,3},{"April","APR",30,4},
        {"May","MAY",31,5},{"June","JUN",30,6},{"July","JUL",31,7},{"August","AUG",31,8},{"September","SEP",30,9},
        {"October","OCT",31,10},{"November","NOV",30,11},{"December","DEC",31,12}
    };
    s_gets(mon,20);
    int days=day(months,mon);
    printf("一共是%d天",days);
    return 0;
}
int day(struct month * months,char * st)
{
    int i=0;
    int sum=0;
    while(i<12)
    {
        sum+=months[i].days;
        if(strcmp(st,months[i].name)==0)
        {
            break;
        }
        i++;
    }
    return sum;
}
char * s_gets(char * st,int n)
{
    char * ret_val;
    char * find;
    ret_val=fgets(st,n,stdin);
    if(ret_val)
    {
        find=strchr(st,'\n');
        if(find)
        {
            *find='\0';
        }
        else
        {
            while(getchar()!='\n')
            {
                continue;
            }
        }
    }
    return ret_val;
}