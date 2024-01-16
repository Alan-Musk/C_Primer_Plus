#include "test_02.h"
#include <stdio.h>
static int mode=0;
static double distance;
static double gas;

void set_mode(int num)
{
    switch (num)
    {
        case 0:
            mode=0;
            break;
        case 1:
            mode=1;
            break;
        default:
            printf("Invalid mode specified.Mode %d(%s) used.\n",mode,mode==0 ? "metric mode" : "US");
    }
}
//根据用户输入的模式提示用户输入相应的数据,并将其存储到文件作用域变量中
void get_info(void)
{
    if(mode)
    {
        printf("Enter distance traveled in miles:");
        scanf("%lf",&distance);
        printf("Enter fuel consumed in gallons:");
        scanf("%lf",&gas);
    }
    else
    {
        printf("Enter distance traveled in kilometers:");
        scanf("%lf",&distance);
        printf("Enter fuel consumed in liters:");
        scanf("%lf",&gas);
    }
}

void show_info(void)
{
    if(mode)
    {
        printf("Fule consumption is %.2lf miles per gallon\n",distance/gas);
    }
    else
    {
        printf("Fule consumption is %.2lf liters per 100 km\n",distance/gas);
    }
}
