//编写一个程序打印一个表格,每一行打印一个整数,该数的平方,该数的立方.要求用户输入表格的上下限.使用一个for循环

#include <stdio.h>
#include <math.h>
int main(void)
{
    int upBorder,lowBorder;


    printf("请输入打印表格的下上界:");
    scanf("%d %d",&lowBorder,&upBorder);

    for(;lowBorder<=upBorder;lowBorder++)
    {
        printf("该数:%d的平方是%d,立方是%d\n",lowBorder,(int)pow(lowBorder,2),(int)pow(lowBorder,3));
    }

    return 0;
}