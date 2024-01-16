// 为了让程序清单9.8中的to_binary()函数更通用,编写一个to_base_n()函数,接受两个参数,且第二个参数在2~10范围内,然后以第2个参数中指定的进制打印第一个参数的数值.
// 例如,to_base_n(129,8)显示的结果为201,也就是129的八进制数,在一个完整的程序中测试该函数
#include <stdio.h>
void to_base_n(unsigned long num,int base);

int main(void)
{
    unsigned long number;
    int base;
    printf("请输入一个整数以及要转换的进制(2~10):");
    while(scanf("%lu %d",&number,&base)==2)
    {
        if(base<2||base>10)
        {
            printf("请正确输入范围:");
            continue;
        }
        printf("%lu转换为",number);
        to_base_n(number,base);
        printf("\n");
        printf("请输入一个整数以及要转换的进制(2~10):");
    }
    printf("Done!\n");

    return 0;
}

void to_base_n(unsigned long num,int base)
{
    char temp=0;
    if(num>0)
    {
        temp=num%base+48;
        to_base_n(num/base,base);
        putchar(temp);
    }
}