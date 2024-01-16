//编写一个程序,提示用户输入一个整数,然后打印从该数到该数大10的所有整数
//例如用户输入5,则打印5-15的所有整数,包括5,15.要求打印的各值之间用一个空格,制表符或换行符分开
#include <stdio.h>

int main(void)
{
    int num,sum;
    printf("请输入一个整数:");
    scanf("%d",&num);
    sum=num+10;

    while(num<=sum)
    {
        printf("%d\n",num);
        num++;
    }

    return 0;
}