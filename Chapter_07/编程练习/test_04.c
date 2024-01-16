//使用if else语句编写一个程序读取输入,读到#位置.用感叹号代替句号,用两个感叹号代替原来的感叹号,最后报告进行了多少次替换
#include <stdio.h>

int main(void)
{
    int times=0;
    char ch;

    while((ch=getchar())!='#')
    {
        if(ch=='.')
        {
            ch='!';
            times++;
            putchar(ch);

        }
        else if(ch=='!')
        {
            putchar(ch);
            putchar(ch);
            times++;
        }
        else
        {
        putchar(ch);
        }
    }

    return 0;
}