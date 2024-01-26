// 编写一个程序,显示一个提供加法,减法,乘法,除法的菜单.获取用户选择的选项后,程序提示用户输入两个数字,然后执行用户刚才选择的操作.该程序只接受菜单提供的选项
// 程序使用float类型的变量存储用户输入的数字,如果用户输入失败,则允许再次输入.进行除法运算时,如果用户输入0作为第二个数(除数).程序应提示用户重新输入一个新值.
#include <stdio.h>
void show_menu(void);//展示菜单
void clean(void);//清除缓冲区
float get_number(void);
int main(void)
{
    char ch;
    float num1=0,num2=0;
    float result;
    show_menu();
    while((ch=getchar())!='q')
    {
        switch(ch)
        {
            case 'a':
                printf("Enter first number:");
                num1=get_number();
                printf("Enter second number:");
                num2=get_number();
                result=num1+num2;
                printf("%.1f + %.1f = %.1f\n",num1,num2,result);
                break;
            case 'b':
                printf("Enter first number:");
                num1=get_number();
                printf("Enter second number:");
                num2=get_number();
                result=num1-num2;
                printf("%.1f - %.1f = %.1f\n",num1,num2,result);
                break;
            case 'c':
                printf("Enter first number:");
                num1=get_number();
                printf("Enter second number:");
                num2=get_number();
                result=num1*num2;
                printf("%.1f * %.1f = %.1f\n",num1,num2,result);
                break;
            case 'd':
                printf("Enter first number:");
                num1=get_number();
                while(num2==0)
                {
                    printf("Enter second number:");
                    num2=get_number();
                    if(num2==0){
                        printf("Cannot divide by zero. Please enter a different number.\n");
                    }
                }
                result=num1/num2;
                printf("%.1f / %.1f = %.1f\n",num1,num2,result);
                break;
            case 'q':
                break;
            default:
                printf("Please enter a char,such as a,s,m,d and q:\n");
                clean();
                break;
        }
        show_menu();
        clean();
    }
    printf("Bye.\n");

    return 0;
}
// 展示菜单
void show_menu(void)
{
    printf("Enter the operation of your chice:\n");
    printf("a) add                  b) subtract\n");
    printf("c) multiply             d) divide\n");
    printf("q) quit\n");
}
//清除缓冲区
void clean(void)
{
    while(getchar()!='\n')
    {
        continue;
    }
}
// 判断输入数据的格式,对错误的数据给出错误提示,直到获取正确的输入格式
float get_number(void)
{
    float f;
    char c;
    while(scanf("%g",&f)!=1)
    {
        while((c=getchar())!='\n')
        {
            putchar(c);
        }
        printf(" is not an number.\n");
        printf("Please enter a number,such as 2.5,-1,78E8,or 3: ");
    }

    return f;
}
