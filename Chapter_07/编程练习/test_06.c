//编写程序读取输入,读到#停止,报告ei出现的次数
//输入:Receive your eieio award
#include <stdio.h>
int main(void)
{
    int times=0;
    char first=' ',second=' ';

    while((first=getchar())!='#')
    {
        if(first==' ')
        {
            continue;
        }
        else
        {
            if(second=='e'&&first=='i')
            {
                times++;
            }
            second=first;
        }

    }
    printf("times=%d\n",times);

    return 0;
}
