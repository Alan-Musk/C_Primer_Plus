// 编写一个程序,把用分钟表示的时间转换成用小时和分钟表示的时间.使用#define或const建一个表示60的符号常量或者const变量
//通过while循环让用户重复输入值,直到用户输入小于或等于0的值才停止
#include <stdio.h>
#define TIME 60

int main(void)
{
    int mins;
    printf("请输入你要代换的分钟数\n");
    scanf("%d",&mins);
    while(mins>0)
    {
        printf("转换为:%d小时 %d分钟\n",mins/TIME,mins%TIME);
        printf("请输入你要代换的分钟数\n");
        scanf("%d",&mins);
    }
    printf("Done!\n");

    return 0;
}