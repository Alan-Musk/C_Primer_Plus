#include "test_03.h"
#include <stdio.h>

int set_mode(int mode)
{
    int num=0;
    switch (mode)
    {
        case 0:
            num=0;
            break;
        case 1:
            num=1;
            break;
        default:
            mode=num;
            printf("Invalid mode specified.Mode %d(%s) used.\n",num,num==0 ? "metric mode" : "US");
    }
    return mode;
}
//根据用户输入的模式提示用户输入相应的数据,并将其存储到文件作用域变量中
double get_info(int num)
{
    double distance;
    double gas;
    double tot;
    if(num)
    {
        printf("Enter distance traveled in miles:");
        scanf("%lf",&distance);
        printf("Enter fuel consumed in gallons:");
        scanf("%lf",&gas);
        tot=distance/gas;
    }
    else
    {
        printf("Enter distance traveled in kilometers:");
        scanf("%lf",&distance);
        printf("Enter fuel consumed in liters:");
        scanf("%lf",&gas);
        tot=distance/gas;
    }
    return tot;
}

void show_info(int mode,double num)
{
    if(mode)
    {
        printf("Fule consumption is %.2lf miles per gallon\n",num);
    }
    else
    {
        printf("Fule consumption is %.2lf liters per 100 km\n",num);
    }
}
