//编写一个程序,读取整数直到用户输入0.输入结束后,程序应报告用户输入的偶数(不包括0)的个数,这些偶数的平均数,输入的奇数的个数及其奇数的平均值
#include <stdio.h>

int main(void)
{
    int oddSum=0,evenSum=0;
    int num,oddTimes=0,evenTimes=0;//num为输入的数值,oddTimes为奇数出现次数,evenTimes为偶数出现次数

    printf("请输入数字,按0退出\n");
    while(scanf("%d",&num),num!=0)
    {
        if(num%2)
        {
            oddSum+=num;
            oddTimes++;
        }
        else
        {
            evenSum+=num;
            evenTimes++;
        }
    }
    //计算平均值时没有考虑除数为零的情况
    if(oddTimes==0){
        printf("没有输入奇数");
        return 1;
    }else if(evenTimes==0){
        printf("没有输入偶数");
        return 1;
    }
    printf("偶数有%d次     平均数为%.2f\n奇数有%d次     平均数为%.2lf\n",evenTimes,(double)evenSum/(double)evenTimes,oddTimes,(double)oddSum/(double)oddTimes);
    return 0;
}
