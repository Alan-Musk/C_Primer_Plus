//编写一个程序,只接受正整数输入,然后显示所有小于或等于该数的素数

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned long input;
    unsigned long i;
    bool isPrime=true;

    printf("请输入要求素数的数:");
    while((scanf("%lu",&input)==1))
    {
        for(i=2;i*i<=input;i++)
        {
            if(input%i==0)
            {
                if((i*i)!=input)
                {
                    printf("%lu %lu\n",i,input/i);
                }
                else
                {
                    printf("%lu\n",i);
                }
                isPrime=false;
            }
        }
        if(isPrime)
            {
                printf("%lu is prime.\n",input);
            }
        printf("请输入要求素数的数(输入q退出):");

        i=0;
    }
    printf("Done!\n");

    return 0;
}