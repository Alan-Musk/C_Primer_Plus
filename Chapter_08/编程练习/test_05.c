// 修改程序清单8.4的猜数字程序,使用更智能的猜测策略.例如,程序最初猜50,询问用户是猜大了还是猜小了还是猜对了.
// 如果猜小了,那么下次猜测的值应该在50和100的中值,也就是75.如果这次猜大了,那么下一次猜测的值应该是50和75的中值,等等
// 使用二分查找策略,如果用户没有欺骗程序,那么程序应该很快就会猜到正确的答案

#include <stdio.h>

int main(void)
{
    int guess=50;
    int small=0;
    int large=100;
    char ch;

    printf("%d\n我猜的对吗?",guess);
    printf("假如猜大了,输入b,猜小了,输入s.\n");
    while((ch=getchar())!='y')
    {
        if(ch=='b')
        {
            large=guess;
            guess=(small+large)/2;

        }
        else if(ch=='s')
        {
            small=guess;
            guess=(large+small)/2;

        }
        else
        {
            printf("输入有误请重新输入.\n");
        }
        while(getchar()!='\n')
        {
            continue;
        }
        printf("%d\n我猜的对吗?",guess);
        printf("假如猜大了,输入b,猜小了,输入s.\n");
    }
    printf("程序结束\n");
    return 0;
}