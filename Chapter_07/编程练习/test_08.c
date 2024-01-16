//修改联系7的假设a,让程序可以给出一个供选择的工资等级菜单,使用switch完成工资等级选择.运行程序后,显示的菜单应该类似这样:
// **********************************
// 1) $8.75/hr           2) $9.33/hr
// 3) $10.00/hr          4) $11.20/hr
// 5) quit
// **********************************

#include <stdio.h>

#define SALARY 10.00
#define LATE 40
#define FRONT 0.15
#define MIDDLE 0.20
#define BEHIDE 0.25

double count();
int main(void)
{
    char ch;

    printf("**********************************\n");
    printf("1) $8.75/hr           2) $9.33/hr\n");
    printf("3) $10.00/hr          4) $11.20/hr\n");
    printf("5) quit\n");
    printf("**********************************\n");
    while((ch=getchar())!='5')
    {
        switch(ch)
        {
            case '1':
                    printf("Please enter your working hours per week.\n");
                    break;
            case '2':
                    printf("Please enter your working hours per week.\n");
                    break;
            case '3':
                    printf("Please enter your working hours per week.\n");
                    break;
            case '4':
                    printf("Please enter your working hours per week.\n");
                    break;
            default:
                    printf("请输入正确的选项\n");
                    break;
        }
        //处理'\n'字符
        while(getchar()!='\n')
        {
            continue;
        }
        printf("**********************************\n");
        printf("1) $8.75/hr           2) $9.33/hr\n");
        printf("3) $10.00/hr          4) $11.20/hr\n");
        printf("5) quit\n");
        printf("**********************************\n");
    }
    printf("Done!\n");

    return 0;
}
