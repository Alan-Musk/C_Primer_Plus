//修改第七章的编程练习8,用字符代替数字标记菜单的选项.用q代替5最为结束输入的标记

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
    printf("a) $8.75/hr           b) $9.33/hr\n");
    printf("c) $10.00/hr          d) $11.20/hr\n");
    printf("q) quit\n");
    printf("**********************************\n");
    while((ch=getchar())!='q')
    {
        switch(ch)
        {
            case 'a':
                    printf("Please enter your working hours per week.\n");
                    break;
            case 'b':
                    printf("Please enter your working hours per week.\n");
                    break;
            case 'c':
                    printf("Please enter your working hours per week.\n");
                    break;
            case 'd':
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
        printf("a) $8.75/hr           b) $9.33/hr\n");
        printf("c) $10.00/hr          d) $11.20/hr\n");
        printf("q) quit\n");
        printf("**********************************\n");
    }
    printf("Done!\n");

    return 0;
}
