// 编写并测试Fibonacci()函数,该函数用循环代替递归计算斐波纳
#include <stdio.h>
unsigned long Fibonacci(unsigned n);

int main(void)
{
    int num1;
    num1=Fibonacci(10);
    printf("%d\n",num1);
    return 0;
}

unsigned long Fibonacci(unsigned n)
{
    int num;
    int after=1;
    int sum=1;
    int temp;
    for(num=3;num<=n;num++)
    {
        temp=sum;
        sum+=after;
        after=temp;
    }

    return sum;
}