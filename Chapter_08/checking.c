// checking.c --输入验证
#include <stdio.h>
#include <stdbool.h>
//验证输入是一个整数
long get_long(void);
//验证范围的上下限是否有效
bool bad_limits(long begin,long end,long low,long high);
//计算a~b的整数平方和
double sum_squares(long a,long b);

int main(void)
{
    const long MIN=-10000000L;
    const long MAX=+10000000L;
    long start;//用户指定的范围最小值
    long stop;//用户指定的范围最大值
    double answer;

    printf("This program computes the sum of the squares of integers in a range.\n"
    "The lower bound should not be less than -10000000 and\nthe upper bound should not be more than +10000000.\n"
    "Enter the limits (enter 0 for both limits to quit):\nlower limit:");
    start=get_long();
    printf("upper limit:");
    stop=get_long();
    while(start!=0||stop!=0)
    {
        if(bad_limits(start,stop,MIN,MAX))
        {
            printf("Please try again.\n");
        }
        else
        {
            answer=sum_squares(start,stop);
            printf("The sum of the squares of the integers ");
            printf("from %ld to %ld is %g\n",start,stop,answer);
        }
        printf("Enter the limits (enter 0 for both limits to quit):\n");
        printf("lower limits:");
        start=get_long();
        printf("upper limit:");
        stop=get_long();
    }
    printf("Done!\n");

    return 0;
}

bool bad_limits(long begin,long end,long low,long high)
{
    bool not_good=false;

    if(begin > end)
    {
        printf("%ld isn't smaller than %ld\n",begin,end);
        not_good=true;
    }
    if(begin<low||end<low)
    {
        printf("Values must be %ld or greater.\n",low);
        not_good=true;
    }
    if(begin>high||end>high)
    {
        printf("Values must be %ld or less.\n",high);
        not_good=true;
    }

    return not_good;
}
long get_long(void)
{
    long input;
    char ch;

    while(scanf("%ld",&input)!=1)
    {
        //关于79-82行注解:question:为什么不能删去:scanf()在读取类型不匹配时会将得到的数据放回缓冲区,以致造成无限循环 
        //getchar()得到第一个字符,非'\n',putchar(),循环到最后回车造成的'\n'字符,由于ch=getchar()先运行,故'\n'也被取出放在ch中,所以缓冲区没有数据了.
        while((ch=getchar())!='\n')
        {
            putchar(ch);
        }
        printf("is not an integer.\nPlease enter an integer value,such as 25,-178,or 3:");
    }

    return input;
}
double sum_squares(long a,long b)
{
    double total=0;
    long i;
    for(i=a;i<=b;i++)
    {
        total+=(double)i*(double)i;
    }
    return total;
}
