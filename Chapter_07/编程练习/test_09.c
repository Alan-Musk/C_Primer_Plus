//编写一个程序,只接受正整数输入,然后显示所有小于或等于该数的素数

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned long input;
    unsigned long i;
    bool isPrime;

    printf("请输入要求素数的数:");
    while((scanf("%lu",&input)==1))
    {
        for(i=2;i<=input;i++)
        {
            isPrime=True;
            for(int j=2;j<=i/2;j++){
                if(i%j==0){
                    isPrime=false;
                    break;
                }
            }
            if(isPrime)
            {
                printf("%lu is prime.\n",i);
            }
        printf("请输入要求素数的数(输入q退出):");
        i=0;
    }
    printf("Done!\n");

    return 0;
}
